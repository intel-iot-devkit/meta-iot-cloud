inherit setuptools python-dir
require protobuf.inc

PACKAGES = "${PN} ${PN}-dev ${PN}-dbg ${PN}-compiler ${PN}-lite python-${PN}"

DEPENDS = "protobuf-native zlib"
RDEPENDS_${PN}-compiler = "${PN}"
RDEPENDS_${PN}-dev += "${PN}-compiler"

PR = "r0"

PYTHON_SRC_DIR = "python"

EXTRA_OECONF += " --with-protoc=${STAGING_BINDIR_NATIVE}/protoc"

do_compile() {
	# Compile protoc compiler
	base_do_compile
}

do_install() {
	local olddir=`pwd`

	# Install protoc compiler
	autotools_do_install

	# Install header files
	export PROTOC="${STAGING_BINDIR_NATIVE}/protoc"
	cd "${S}/${PYTHON_SRC_DIR}"
	distutils_do_install

	cd "$olddir"
}

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

FILES_python-${PN} = "${PYTHON_SITEPACKAGES_DIR}"


BBCLASSEXTEND = "nativesdk"