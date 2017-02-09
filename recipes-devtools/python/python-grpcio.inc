require recipes-support/grpc/grpc.inc

DEPENDS += "\
	${PYTHON_PN}-cython-native \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-six \
	${PYTHON_PN}-enum34 \
	${PYTHON_PN}-protobuf \
"

PR = "r0"

do_compile_prepend() {
	export GRPC_PYTHON_BUILD_WITH_CYTHON=1
}