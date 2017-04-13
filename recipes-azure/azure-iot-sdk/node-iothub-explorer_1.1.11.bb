DESCRIPTION = "IoT Hub Explorer is a tool that allows you to explore and test Azure IoT Hub features"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/iothub-explorer"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=0296d24e582db92fa4e33fd40e18099a"

DEPENDS = "nodejs"
RDEPENDS_${PN} = "bash"

PR = "r0"

PACKAGES = "\
	${PN} \
"

SRC_URI = "git://github.com/Azure/iothub-explorer.git"
SRCREV = "491edb323fb18891b03682849aec9b835d2d3b7b"

S = "${WORKDIR}/git"

## NPM ##
NODE_MODULES_DIR = "${prefix}/lib/node_modules/"
NPM_CACHE_DIR ?= "${WORKDIR}/npm_cache"
NPM_REGISTRY ?= "http://registry.npmjs.org/"
NPM_INSTALL_FLAGS ?= "--production --without-ssl --insecure --no-optional --verbose"

SRC_NAME = "iothub-explorer"

do_compile() {
	export NPM_CONFIG_CACHE="${NPM_CACHE_DIR}"

	npm cache clear
	npm --registry=${NPM_REGISTRY} --arch=${TARGET_ARCH} --target_arch=${TARGET_ARCH} ${NPM_INSTALL_FLAGS} install
	npm prune --production

	# FIXME: This is only required until the xml2js dependency is update in the azure-storage package
	find ${S} -type f -name "switch-bench.js" -exec rm -f {} \;
}

do_install() {
	install -d ${D}${NODE_MODULES_DIR}/${SRC_NAME}
	cp -r ${S}/* ${D}${NODE_MODULES_DIR}/${SRC_NAME}

	# Symlinks
	install -d ${D}${bindir}
	ln -s ${NODE_MODULES_DIR}${SRC_NAME}/${SRC_NAME}.js ${D}${bindir}/${SRC_NAME}
}

FILES_${PN} += "\
	${NODE_MODULES_DIR}${SRC_NAME} \
	${bindir} \
"

INHIBIT_PACKAGE_DEBUG_SPLIT_${PN} = "1"