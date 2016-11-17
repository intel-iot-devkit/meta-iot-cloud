DESCRIPTION = "Microsoft Azure IoT Node-RED node"

require azure-iot-sdk.inc

DEPENDS = "nodejs"
RDEPENDS_${PN} = "node-red"

PR = "r0"

PACKAGES = "\
	${PN} \
"

## NPM ##
NODE_MODULES_DIR = "${prefix}/lib/node_modules/"
NPM_CACHE_DIR ?= "${WORKDIR}/npm_cache"
NPM_REGISTRY ?= "https://registry.npmjs.org/"
NPM_INSTALL_FLAGS ?= "--production --no-optional --verbose"

SRC_DIR = "${S}/node/device/node-red"

do_compile() {
	export NPM_CONFIG_CACHE="${NPM_CACHE_DIR}"

	cd ${SRC_DIR}
	npm cache clear
	npm --registry=${NPM_REGISTRY} --arch=${TARGET_ARCH} --target_arch=${TARGET_ARCH} ${NPM_INSTALL_FLAGS} install

	# FIXME: This is only required until the xml2js dependency is update in the azure-storage package
	find . -type f -name "switch-bench.js" -exec rm -f {} \;
}

do_install() {
	install -d ${D}${NODE_MODULES_DIR}/${PN}
	cp -r ${SRC_DIR}/* ${D}${NODE_MODULES_DIR}/${PN}
}

FILES_${PN} += "${NODE_MODULES_DIR}${PN}"
INHIBIT_PACKAGE_DEBUG_SPLIT_${PN} = "1"
