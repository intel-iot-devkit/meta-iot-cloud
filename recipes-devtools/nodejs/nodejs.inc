DESCRIPTION = "Node.js is a JavaScript runtime built on Chrome's V8 JavaScript engine"
HOMEPAGE = "http://nodejs.org"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=14152103612601231d62308345463670"

inherit pkgconfig

DEPENDS = "\
	openssl (>= 1.0.2%) \
	zlib \
	c-ares \
	libuv \
	http-parser \
	icu \
"

RDEPENDS_${PN}-dev = "\
	openssl-dev \
	zlib-dev \
	c-ares-dev \
	libuv-dev \
	http-parser-dev \
	icu-dev \
"

INC_PR = "r0"

SRC_URI = "\
	git://github.com/nodejs/node.git;branch=v6.x;tag=v${PV} \
"

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

NODEJS_ARCH = "${@get_nodejs_arch(d)}"

DISABLE_STATIC = ""

ARCH_SETTINGS ?= ""
ARCH_SETTINGS_mips64 = "--with-mips-arch-variant=r2"
ARCH_SETTINGS_mips64el = "--with-mips-arch-variant=r2"

EXTRA_OECONF += "\
	--without-snapshot \
	--shared-openssl \
	--shared-zlib \
	--shared-libuv \
	--shared-cares \
	--shared-http-parser \
	--with-intl=system-icu \
	${ARCH_SETTINGS} \
"

do_configure () {
	export LD="${CXX}"

	./configure \
		--prefix=${prefix} \
		--dest-cpu="${NODEJS_ARCH}" \
		--dest-os=linux \
		${EXTRA_OECONF}
}

do_compile () {
	export LD="${CXX}"
	oe_runmake -C out node BUILDTYPE=Release
}

BBCLASSEXTEND = "native nativesdk"
