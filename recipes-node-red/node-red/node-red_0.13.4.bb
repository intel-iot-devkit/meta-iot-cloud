DESCRIPTION = "Node-RED"
HOMEPAGE = "http://nodered.org"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=2ee41112a44fe7014dce33e26468ba93"
DEPENDS = "nodejs nodejs-native"
RDEPENDS_${PN} = "bash python nodejs"

FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

PR = "r1"

SRC_URI = "https://github.com/${PN}/${PN}/releases/download/${PV}/${PN}-${PV}.zip \
	   file://node-red.service \
"

SRC_URI[md5sum] = "442c28584892617bbf300456bc6f1ac9"
SRC_URI[sha256sum] = "badddaebb0ebc9cdc47372b88050a83117b55fb28437f58c5696c5669261db1e"

S = "${WORKDIR}/${PN}-${PV}"

NODE_MODULES_DIR = "${prefix}/lib/node_modules/"
NPM_CACHE_DIR ?= "${WORKDIR}/npm_cache"
NPM_REGISTRY ?= "https://registry.npmjs.org/"
NPM_INSTALL_FLAGS ?= "--production --no-optional --verbose"

do_compile() {
	export NPM_CONFIG_CACHE="${NPM_CACHE_DIR}"
	
	# Clear cache
	npm cache clear

	# Install
	npm --registry=${NPM_REGISTRY} --arch=${TARGET_ARCH} --target_arch=${TARGET_ARCH} ${NPM_INSTALL_FLAGS} install
}

do_install() {
	install -d ${D}${NODE_MODULES_DIR}${PN}
    	cp -r ${S}/* ${D}${NODE_MODULES_DIR}${PN}
	
	install -d ${D}${systemd_unitdir}/system/
	install -m 0644 ${WORKDIR}/${PN}.service ${D}${systemd_unitdir}/system/
}

inherit systemd

SYSTEMD_AUTO_ENABLE = "enable"
SYSTEMD_SERVICE_${PN} = "${PN}.service"

PACKAGES = "${PN}"

FILES_${PN} += "${NODE_MODULES_DIR}${PN} \
		${systemd_unitdir} \
"

INHIBIT_PACKAGE_DEBUG_SPLIT = "1"
