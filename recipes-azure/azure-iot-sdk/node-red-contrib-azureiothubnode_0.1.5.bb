DESCRIPTION = "Node-Red node for Azure IoT Hub"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-iot-sdk-node"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=7efa302969517c58e8c15e72b714abf0"

DEPENDS = "nodejs"
RDEPENDS_${PN} = "node-red"

PR = "r0"

PACKAGES = "\
	${PN} \
"

SRC_URI = "git://github.com/Azure/azure-iot-sdk-node.git"
SRCREV = "fc16a33a43abaa2ad7f74bf10f7444895cb29d61"

S = "${WORKDIR}/git"

## NPM ##
NODE_MODULES_DIR = "${prefix}/lib/node_modules/"
NPM_CACHE_DIR ?= "${WORKDIR}/npm_cache"
NPM_REGISTRY ?= "http://registry.npmjs.org/"
NPM_INSTALL_FLAGS ?= "--production --without-ssl --insecure --no-optional --verbose"

SRC_DIR = "${S}/device/node-red/"

do_compile() {
	export NPM_CONFIG_CACHE="${NPM_CACHE_DIR}"

	cd ${SRC_DIR}
	npm cache clear
	npm --registry=${NPM_REGISTRY} --arch=${TARGET_ARCH} --target_arch=${TARGET_ARCH} ${NPM_INSTALL_FLAGS} install
	npm prune --production

	# FIXME: This is only required until the xml2js dependency is update in the azure-storage package
	find . -type f -name "switch-bench.js" -exec rm -f {} \;
}

do_install() {
	install -d ${D}${NODE_MODULES_DIR}/${PN}
	cp -r ${SRC_DIR}/* ${D}${NODE_MODULES_DIR}/${PN}
}

FILES_${PN} += "${NODE_MODULES_DIR}${PN}"

INHIBIT_PACKAGE_DEBUG_SPLIT_${PN} = "1"
