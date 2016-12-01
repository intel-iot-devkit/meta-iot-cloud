DESCRIPTION = "CLI tool to manage device clients using the Azure IoT Hub service SDK"

require azure-iot-sdk.inc

DEPENDS = "nodejs"
RDEPENDS_${PN} = "bash"

PR = "r1"

PACKAGES = "\
	${PN} \
"

## NPM ##
NODE_MODULES_DIR = "${prefix}/lib/node_modules/"
NPM_CACHE_DIR ?= "${WORKDIR}/npm_cache"
NPM_REGISTRY ?= "http://registry.npmjs.org/"
NPM_INSTALL_FLAGS ?= "--production --without-ssl --insecure --no-optional --verbose"

SRC_DIR = "${S}/tools/iothub-explorer"
SRC_NAME = "iothub-explorer"

do_compile() {
	export NPM_CONFIG_CACHE="${NPM_CACHE_DIR}"

	cd ${SRC_DIR}
	npm cache clear
	npm --registry=${NPM_REGISTRY} --arch=${TARGET_ARCH} --target_arch=${TARGET_ARCH} ${NPM_INSTALL_FLAGS} install
	npm prune --production

	# FIXME: This is only required until the xml2js dependency is update in the azure-storage package
	find ${S}/tools/iothub-explorer -type f -name "switch-bench.js" -exec rm -f {} \;
}

do_install() {
	install -d ${D}${NODE_MODULES_DIR}/${SRC_NAME}
	cp -r ${SRC_DIR}/* ${D}${NODE_MODULES_DIR}/${SRC_NAME}
}

FILES_${PN} += "${NODE_MODULES_DIR}${SRC_NAME}"
INHIBIT_PACKAGE_DEBUG_SPLIT_${PN} = "1"

pkg_postinst_${PN}() {
#!/bin/sh
# Post installation script

ln -s ${NODE_MODULES_DIR}${SRC_NAME}/${SRC_NAME}.js ${bindir}/${SRC_NAME}
chmod 755 ${bindir}/${SRC_NAME}

}

pkg_prerm-${PN}() {
#!/bin/sh
# Pre removal script

rm ${bindir}/${SRC_NAME}

}
