DESCRIPTION = "Google gRPC"
HOMEPAGE = "http://www.grpc.io/"
SECTION = "devel/python"

DEPENDS = "${PYTHON_PN}-protobuf"

FILESEXTRAPATHS_prepend := "${THISDIR}/python-grpcio:"
SRC_URI_append_class-target = " file://0001-setup.py-Do-not-mix-C-and-C-compiler-options.patch "

RDEPENDS_${PN} = "${PYTHON_PN}-protobuf \
                  ${PYTHON_PN}-setuptools \
                  ${PYTHON_PN}-six \
"

LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/BSD-3-Clause;md5=550794465ba0ec5312d6919e203a55f9"

inherit setuptools3 pypi

SRC_URI[md5sum] = "7860f7c61de3890323670b7b1ff63e56"
SRC_URI[sha256sum] = "88d87aab9c7889b3ab29dd74aac1a5493ed78b9bf5afba1c069c9dd5531f951d"

CLEANBROKEN = "1"

BBCLASSEXTEND = "native nativesdk"
