DESCRIPTION = "Node-RED nodes to talk to sensors supported by the UPM library"
HOMEPAGE = "https://github.com/w4ilun/Node-Red-Node-UPM"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.md;md5=187ed96789675b0c4f200a7070d2a5c1"

DEPENDS = "nodejs-native"
RDEPENDS_${PN} = "node-red"

PR = "r2"

SRC_URI = "git://github.com/intel-iot-devkit/${PN}.git"
SRCREV = "11d17e7d247aa9374cc587a14a382c63c57b9bb1"

S = "${WORKDIR}/git"

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
}

PACKAGES = "${PN}"

FILES_${PN} += "${NODE_MODULES_DIR}${PN} \
"

INHIBIT_PACKAGE_DEBUG_SPLIT = "1"
