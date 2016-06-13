DESCRIPTION = "Node-RED nodes to talk to sensors supported by the UPM library"
HOMEPAGE = "https://github.com/w4ilun/Node-Red-Node-UPM"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.md;md5=187ed96789675b0c4f200a7070d2a5c1"

DEPENDS = "node-red nodejs nodejs-native"
RDEPENDS_${PN} = "node-red nodejs"

PR = "r0"

SRC_URI = "git://github.com/intel-iot-devkit/${PN}.git"
SRCREV = "74c427c0fa028baf2f799892c11adccc13de2d0b"

S = "${WORKDIR}/git"

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
}

PACKAGES = "${PN}"

FILES_${PN} += "${NODE_MODULES_DIR}${PN} \
"

INHIBIT_PACKAGE_DEBUG_SPLIT = "1"
