DESCRIPTION = "HTTP/2-based RPC framework"
AUTHOR = "Google Inc."
HOMEPAGE = "https://grpc.io"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=dc0d1d7d86350a5c51c835e3cea3f896"

SRC_URI = "gitsm://github.com/grpc/grpc.git;branch=v1.4.x"
SRCREV = "b108847dd613d324ebe69438171a8808ca030acc"

S = "${WORKDIR}/git"

DEPENDS += "\
    ${PYTHON_PN}-cython-native \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-six \
    ${PYTHON_PN}-protobuf \
"

PR = "r0"

do_compile_prepend() {
    export GRPC_PYTHON_BUILD_WITH_CYTHON=1
}
