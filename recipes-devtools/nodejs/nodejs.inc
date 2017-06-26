DESCRIPTION = "Node.js is a JavaScript runtime built on Chrome's V8 JavaScript engine"
HOMEPAGE = "http://nodejs.org"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=41a3a0ccf7f515cac3377389dd8faac8"

DEPENDS = "\
	openssl (>= 1.0.2%) \
	zlib \
	c-ares \
	libuv \
	http-parser \
	icu \
"

INC_PR = "r0"

SRC_URI = "git://github.com/nodejs/node.git;branch=v6.x"
SRCREV = "a0bfd4f5a09d1dc2d6d4efb6f21594ec0b39650f"

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

EXTRA_OECONF += "\
	--without-snapshot \
	--shared-openssl \
	--shared-zlib \
	--shared-libuv \
	--shared-cares \
	--shared-http-parser \
	--with-intl=system-icu \
"

do_configure () {
	export LD="${CXX}"

	./configure \
		--prefix=${prefix} \
		--dest-cpu="${NODEJS_ARCH}" \
		--dest-os=linux \
        	${ARCHFLAGS} \
		${EXTRA_OECONF}
}

do_compile () {
	export LD="${CXX}"
	oe_runmake BUILDTYPE=Release
}

BBCLASSEXTEND = "native nativesdk"
