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

S = "${WORKDIR}/${PN}-${PV}"

NODE_MODULES_DIR = "${prefix}/lib/node_modules/"
NPM_CACHE_DIR ?= "${WORKDIR}/npm_cache"
NPM_REGISTRY ?= "http://registry.npmjs.org/"
NPM_INSTALL_FLAGS ?= "--production --without-ssl --insecure --no-optional --verbose"

do_compile() {
	export NPM_CONFIG_CACHE="${NPM_CACHE_DIR}"
	
	# Clear cache
	npm cache clear

	# Install
	npm --registry=${NPM_REGISTRY} --arch=${TARGET_ARCH} --target_arch=${TARGET_ARCH} ${NPM_INSTALL_FLAGS} install
	npm prune --production
}

do_install() {
	install -d ${D}${NODE_MODULES_DIR}${PN}
    	cp -r ${S}/* ${D}${NODE_MODULES_DIR}${PN}
	
	install -d ${D}${systemd_unitdir}/system/
	install -m 0644 ${WORKDIR}/${PN}.service ${D}${systemd_unitdir}/system/
}

pkg_postinst_${PN}() {
#!/bin/sh
# Post installation script

if [ -f ${bindir}/${PN} ]
then
	rm ${bindir}/${PN}
fi

ln -s ${NODE_MODULES_DIR}${PN}/red.js ${bindir}/${PN}
chmod 755 ${bindir}/${PN}

}

pkg_prerm_${PN}() {
#!/bin/sh
# Pre removal script

if [ -f ${bindir}/${PN} ]
then
	rm ${bindir}/${PN}
fi

}

inherit systemd

SYSTEMD_AUTO_ENABLE = "enable"
SYSTEMD_SERVICE_${PN} = "${PN}.service"

PACKAGES = "${PN}"

FILES_${PN} = "\
	${NODE_MODULES_DIR}${PN} \
	${systemd_unitdir} \
"

INHIBIT_PACKAGE_DEBUG_SPLIT = "1"
