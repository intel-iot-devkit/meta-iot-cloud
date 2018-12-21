DESCRIPTION = "Connect to IBM Watson Internet of Things Plaform as a Device or Gateway"
AUTHOR = "Nick O'Leary"
HOMEPAGE = "https://github.com/ibm-watson-iot/node-red-contrib-ibm-watson-iot"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=9812725859172d1c78fb60518d16fe64"

DEPENDS = "nodejs-native"
RDEPENDS_${PN} = "bash node-red"

SRC_URI = "git://github.com/ibm-watson-iot/node-red-contrib-ibm-watson-iot.git"
SRCREV = "53ebf7d58def7d05a26b5f3b6c0e370149296b3f"

PR = "r0"

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

NODE_MODULES_DIR = "${prefix}/lib/node_modules"
NPM_CACHE_DIR ?= "${WORKDIR}/npm_cache"
NPM_REGISTRY ?= "http://registry.npmjs.org/"
NPM_ARCH = "${@get_nodejs_arch(d)}"
NPM_INSTALL_FLAGS = "--production --without-ssl --insecure --no-optional --verbose"

do_compile() {
    export NPM_CONFIG_CACHE="${NPM_CACHE_DIR}"
    
    # Clear cache
    npm cache clear

    npm --registry=${NPM_REGISTRY} --arch=${NPM_ARCH} --target_arch=${NPM_ARCH} ${NPM_INSTALL_FLAGS} install
    npm prune --production
}

do_install() {
    install -d ${D}${NODE_MODULES_DIR}
    cp -r ${S} ${D}${NODE_MODULES_DIR}/${PN}
}

PACKAGES = "${PN}"

FILES_${PN} += "${NODE_MODULES_DIR}"

INHIBIT_PACKAGE_DEBUG_SPLIT = "1"
