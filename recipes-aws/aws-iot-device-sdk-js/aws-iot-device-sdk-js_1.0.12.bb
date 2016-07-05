DESCRIPTION = "AWS IoT Node.js SDK for Embedded Devices"
HOMEPAGE = "https://github.com/aws/aws-iot-device-sdk-js"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=1431d1446b43adc38d1445e89c8b61ff"

DEPENDS = "nodejs"
RDEPENDS_${PN} = "bash nodejs"

SRC_URI = "https://github.com/aws/${PN}/archive/v${PV}.tar.gz"
SRC_URI[md5sum] = "10c5d6ac1a00bab24d43e83f01a4ee44"
SRC_URI[sha256sum] = "3f6dcbd0c394d4ae8e37731aba7a1454f19a70e84d1d9477cf93de48fb27cc9e"

PR = "r0"

S = "${WORKDIR}/${PN}-${PV}"

NODE_MODULES_DIR = "${prefix}/lib/node_modules"
NPM_CACHE_DIR ?= "${WORKDIR}/npm_cache"
NPM_REGISTRY ?= "https://registry.npmjs.org/"
NPM_INSTALL_FLAGS = "--production"

do_compile() {
	export NPM_CONFIG_CACHE="${NPM_CACHE_DIR}"
	
	# Clear cache
	npm cache clear

	npm --registry=${NPM_REGISTRY} --arch=${TARGET_ARCH} --target_arch=${TARGET_ARCH} install
	npm prune ${NPM_INSTALL_FLAGS}
}

do_install() {
	install -d ${D}${NODE_MODULES_DIR}/aws-iot-device-sdk
	cp -r * ${D}${NODE_MODULES_DIR}/aws-iot-device-sdk
}

PACKAGES = "${PN}"

FILES_${PN} += "${NODE_MODULES_DIR}"

INHIBIT_PACKAGE_DEBUG_SPLIT = "1"
