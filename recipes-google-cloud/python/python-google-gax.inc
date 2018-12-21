DESCRIPTION = "Google API Extensions"
HOMEPAGE = "https://github.com/googleapis/gax-python"
AUTHOR = "Google API Authors"
LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://LICENSE;md5=f83cd5dde2d24d5e0f5ae6b1364ace79"

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-dill \
    ${PYTHON_PN}-googleapis-common-protos \
    ${PYTHON_PN}-grpcio \
    ${PYTHON_PN}-google-auth \
    ${PYTHON_PN}-ply \
    ${PYTHON_PN}-protobuf \
    ${PYTHON_PN}-requests \
"

PR = "r0"

SRC_URI = "git://github.com/googleapis/gax-python.git"
SRCREV = "7cc359156ad421e408dddc93cdf66ddf0c875f1c"

S = "${WORKDIR}/git"
