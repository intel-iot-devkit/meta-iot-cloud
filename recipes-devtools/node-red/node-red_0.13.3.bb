DESCRIPTION = "Node-RED"
HOMEPAGE = "http://nodered.org"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=2ee41112a44fe7014dce33e26468ba93"
DEPENDS = "nodejs nodejs-native"
RDEPENDS_${PN} = "bash python nodejs"

FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

inherit npm-install

PR = "r1"

SRC_URI = "https://github.com/${PN}/${PN}/releases/download/${PV}/${PN}-${PV}.zip \
	   file://${PN}.service \
"

SRC_URI[md5sum] = "c7941812e6e0b2cd7d4187b55cb9d07a"
SRC_URI[sha256sum] = "4b346097482cbf10c3215c4f6b30f1a3dc549df071c3089f16e73245a11e5ebc"

S = "${WORKDIR}/${PN}-${PV}"

NODE_MODULES_DIR = "${libdir}/node_modules/"
NPM_INSTALL_FLAGS = "--production --no-optional"

do_install_append() {
	install -d ${D}${NODE_MODULES_DIR}${PN}
    	cp -r ${S}/* ${D}${NODE_MODULES_DIR}${PN}
	
	install -d ${D}${systemd_unitdir}/system/
	install -m 0644 ${WORKDIR}/${PN}.service ${D}${systemd_unitdir}/system/
}

inherit systemd

SYSTEMD_AUTO_ENABLE = "enable"
SYSTEMD_SERVICE_${PN} = "${PN}.service"

FILES_${PN} += "${NODE_MODULES_DIR}${PN} \
		${systemd_unitdir}/system"

INHIBIT_PACKAGE_DEBUG_SPLIT = "1"
