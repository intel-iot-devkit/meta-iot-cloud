DESCRIPTION = "Node-RED nodes for Google Cloud Platform"
AUTHOR = "Cloud Partner Engineering"
HOMEPAGE = "https://github.com/GoogleCloudPlatform/node-red-contrib-google-cloud.git"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

DEPENDS = "nodejs"

RDEPENDS_${PN} = "\
	bash \
	node-red \
"

SRC_URI = "git://github.com/GoogleCloudPlatform/${PN}.git;branch=master"
SRCREV = "2e646aaf897da0d54a7ee5df55c4de3ac2eac86c"

PR = "r2"

S = "${WORKDIR}/git"

NODE_MODULES_DIR = "${prefix}/lib/node_modules"
NPM_CACHE_DIR ?= "${WORKDIR}/npm_cache"
NPM_REGISTRY ?= "http://registry.npmjs.org/"
NPM_INSTALL_FLAGS = "--production --without-ssl --insecure --no-optional --verbose --unsafe-perm"

do_compile() {
	export NPM_CONFIG_CACHE="${NPM_CACHE_DIR}"
	
	# Clear cache
	npm cache clear

	npm --registry=${NPM_REGISTRY} --arch=${TARGET_ARCH} --target_arch=${TARGET_ARCH} ${NPM_INSTALL_FLAGS} install
	npm prune --production
}

do_install() {
	install -d ${D}${NODE_MODULES_DIR}/${PN}
	cp -r ${S}/* ${D}${NODE_MODULES_DIR}/${PN}
}

PACKAGES = "${PN}"

FILES_${PN} += "${NODE_MODULES_DIR}/${PN}"

INHIBIT_PACKAGE_DEBUG_SPLIT = "1"

INSANE_SKIP_${PN} = "staticdev file-rdeps"
