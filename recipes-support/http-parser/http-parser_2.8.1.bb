SUMMARY = "Parser for HTTP messages written in C"
HOMEPAGE = "https://github.com/nodejs/http-parser"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE-MIT;md5=9bfa835d048c194ab30487af8d7b3778"

SRC_URI = "git://github.com/nodejs/http-parser.git;protocol=https;branch=main"
SRCREV = "54f55a2f02a823e5f5c87abe853bb76d1170718d"

PR = "r0"

S = "${WORKDIR}/git"

EXTRA_OEMAKE = "\
    'CFLAGS=${CFLAGS} -Wno-implicit-fallthrough' \
"

do_configure[noexec] = "1"

do_compile() {
    oe_runmake library package
}

do_install() {
    oe_libinstall -C ${S} -so libhttp_parser ${D}${libdir}

    install -d ${D}${includedir}
    install -m 0644 ${S}/*.h ${D}${includedir}
}

BBCLASSEXTEND = "native nativesdk"
