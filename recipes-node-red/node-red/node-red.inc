DESCRIPTION = "Node-RED"
HOMEPAGE = "http://nodered.org"
LICENSE = "Apache-2.0"

DEPENDS = "nodejs-native"
RDEPENDS_${PN} = "bash python nodejs"

FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

SRC_URI = "\
	https://github.com/${PN}/${PN}/releases/download/${PV}/${PN}-${PV}.zip \
	file://node-red.service \
"
PR = "r2"

S = "${WORKDIR}/${PN}-${PV}"

def get_nodejs_arch(d):
    target_arch = bb.data.getVar('TRANSLATED_TARGET_ARCH', d, True)

    if target_arch == "x86-64":
        target_arch = "x64"
    elif target_arch == "aarch64":
        target_arch = "arm64"
    elif target_arch == "powerpc":
        target_arch = "ppc"
    elif target_arch == "powerpc64":
        target_arch = "ppc64"
    elif (target_arch == "i486" or target_arch == "i586" or target_arch == "i686"):
        target_arch = "ia32"

    return target_arch

NODE_MODULES_DIR = "${prefix}/lib/node_modules/"
NPM_CACHE_DIR ?= "${WORKDIR}/npm_cache"
NPM_REGISTRY ?= "http://registry.npmjs.org/"
NPM_ARCH = "${@get_nodejs_arch(d)}"
NPM_INSTALL_FLAGS ?= "--production --without-ssl --insecure --no-optional --verbose"

do_compile() {
	export NPM_CONFIG_CACHE="${NPM_CACHE_DIR}"
	
	# Clear cache
	npm cache clear

	# Install
	npm --registry=${NPM_REGISTRY} --arch=${NPM_ARCH} --target_arch=${NPM_ARCH} ${NPM_INSTALL_FLAGS} install
	npm prune --production
}

do_install() {
	install -d ${D}${NODE_MODULES_DIR}${PN}
    	cp -r ${S}/* ${D}${NODE_MODULES_DIR}${PN}

	# Set permissions
	chmod 0755 ${D}${NODE_MODULES_DIR}${PN}/red.js

	# Symlinks
	install -d ${D}${bindir}
	ln -s ${NODE_MODULES_DIR}${PN}/red.js ${D}${bindir}/${PN}
	
	install -d ${D}${systemd_unitdir}/system/
	install -m 0644 ${WORKDIR}/${PN}.service ${D}${systemd_unitdir}/system/
}

inherit systemd

SYSTEMD_AUTO_ENABLE = "enable"
SYSTEMD_SERVICE_${PN} = "${PN}.service"

PACKAGES = "${PN}"

FILES_${PN} = "\
	${NODE_MODULES_DIR}${PN} \
	${bindir} \
	${systemd_unitdir} \
"

INHIBIT_PACKAGE_DEBUG_SPLIT = "1"
