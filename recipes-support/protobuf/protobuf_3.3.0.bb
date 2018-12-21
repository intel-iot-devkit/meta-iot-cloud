require protobuf.inc
inherit autotools-brokensep

PACKAGE_BEFORE_PN = "${PN}-compiler"

DEPENDS = "zlib"
RDEPENDS_${PN}-compiler = "${PN}"
RDEPENDS_${PN}-dev += "${PN}-compiler"

PR = "r0"

EXTRA_OECONF += " --with-protoc=echo"

FILES_${PN}-compiler = "\
    ${bindir} \
    ${libdir}/libprotoc${SOLIBS} \
"

BBCLASSEXTEND = "native nativesdk"
