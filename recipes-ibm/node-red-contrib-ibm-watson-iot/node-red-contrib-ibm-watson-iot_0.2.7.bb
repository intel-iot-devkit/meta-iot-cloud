DESCRIPTION = "Connect to IBM Watson Internet of Things Plaform as a Device or Gateway"
AUTHOR = "Nick O'Leary"
HOMEPAGE = "https://github.com/ibm-messaging/iot-nodered"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=9812725859172d1c78fb60518d16fe64"

DEPENDS = "nodejs"
RDEPENDS_${PN} = "bash nodejs node-red"

SRC_URI = "git://github.com/ibm-watson-iot/node-red-contrib-ibm-watson-iot.git"
SRCREV = "5dafdaa723d135956da104ebbf780457c8737356"

PR = "r0"

S = "${WORKDIR}/git"

NODE_MODULES_DIR = "${prefix}/lib/node_modules"
NPM_CACHE_DIR ?= "${WORKDIR}/npm_cache"
NPM_REGISTRY ?= "http://registry.npmjs.org/"
NPM_INSTALL_FLAGS = "--production --without-ssl --insecure --no-optional --verbose"

do_compile() {
	export NPM_CONFIG_CACHE="${NPM_CACHE_DIR}"
	
	# Clear cache
	npm cache clear

	npm --registry=${NPM_REGISTRY} --arch=${TARGET_ARCH} --target_arch=${TARGET_ARCH} ${NPM_INSTALL_FLAGS} install
	npm prune --production
}

do_install() {
	install -d ${D}${NODE_MODULES_DIR}
	cp -r ${S} ${D}${NODE_MODULES_DIR}/${PN}
}

PACKAGES = "${PN}"

FILES_${PN} += "${NODE_MODULES_DIR}"

INHIBIT_PACKAGE_DEBUG_SPLIT = "1"
