DESCRIPTION = "IoT Hub Explorer is a tool that allows you to explore and test Azure IoT Hub features"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/iothub-explorer"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=0296d24e582db92fa4e33fd40e18099a"

DEPENDS = "nodejs-native"
RDEPENDS_${PN} = "bash nodejs"

PR = "r0"

PACKAGES = "\
	${PN} \
"

SRC_URI = "git://github.com/Azure/iothub-explorer.git"
SRCREV = "23eae406be574ad7c48d450ffa2cb10f1188ec1d"

S = "${WORKDIR}/git"

def get_nodejs_arch(d):
    target_arch = d.getVar('TRANSLATED_TARGET_ARCH', True)

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

SRC_NAME = "iothub-explorer"

do_compile() {
	export NPM_CONFIG_CACHE="${NPM_CACHE_DIR}"

	npm cache clear
	npm --registry=${NPM_REGISTRY} --arch=${NPM_ARCH} --target_arch=${NPM_ARCH} ${NPM_INSTALL_FLAGS} install
	npm prune --production

	# FIXME: This is only required until the xml2js dependency is update in the azure-storage package
	find ${S} -type f -name "switch-bench.js" -exec rm -f {} \;
}

do_install() {
	install -d ${D}${NODE_MODULES_DIR}/${SRC_NAME}
	cp -r ${S}/* ${D}${NODE_MODULES_DIR}/${SRC_NAME}

	# Set permissions
	chmod 0755 ${D}${NODE_MODULES_DIR}${SRC_NAME}/${SRC_NAME}.js

	# Symlinks
	install -d ${D}${bindir}
	ln -s ${NODE_MODULES_DIR}${SRC_NAME}/${SRC_NAME}.js ${D}${bindir}/${SRC_NAME}
}

FILES_${PN} += "\
	${NODE_MODULES_DIR}${SRC_NAME} \
	${bindir} \
"

INHIBIT_PACKAGE_DEBUG_SPLIT_${PN} = "1"
