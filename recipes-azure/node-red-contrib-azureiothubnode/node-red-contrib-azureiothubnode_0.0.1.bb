DESCRIPTION = "An Azure IoT Hub node for node-red"
HOMEPAGE = "https://github.com/Azure/azure-iot-sdks/tree/develop/node/device/node-red"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=240c452f6bcc3eeaab91b345a8531104"

DEPENDS = "node-red nodejs nodejs-native"
RDEPENDS_${PN} = "node-red nodejs"

PR = "r1"

SRC_URI = "git://github.com/Azure/azure-iot-sdks.git;branch=develop"
SRCREV = "4641b626aad9eb1b35529eb5015e39d6b0e95642"

S = "${WORKDIR}/git/node/device/node-red"

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
