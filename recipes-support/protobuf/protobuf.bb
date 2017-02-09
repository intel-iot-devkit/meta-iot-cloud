inherit autotools
require protobuf.inc

PACKAGES = "${PN} ${PN}-dev ${PN}-dbg ${PN}-compiler ${PN}-lite"

DEPENDS = "protobuf-native zlib"
RDEPENDS_${PN}-compiler = "${PN}"
RDEPENDS_${PN}-dev += "${PN}-compiler"

PR = "r0"

EXTRA_OECONF += " --with-protoc=${STAGING_BINDIR_NATIVE}/protoc"

FILES_${PN} = "\
	${libdir}/libprotobuf.so.* \
"

FILES_${PN}-compiler = "\
	${bindir} \
	${libdir}/libprotoc.so.* \
"

FILES_${PN}-lite = "\
	${libdir}/libprotobuf-lite.so.* \
"

FILES_${PN}-dev = "\
	${libdir}/*.so \
	${libdir}/*.la \
	${libdir}/pkgconfig \
	${includedir} \
"

BBCLASSEXTEND = "nativesdk"