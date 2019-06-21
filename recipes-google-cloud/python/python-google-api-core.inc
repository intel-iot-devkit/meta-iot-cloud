SUMMARY = "Google API client core library"
DESCRIPTION = "Defines common helpers used by all Google API clients"
HOMEPAGE = "https://github.com/GoogleCloudPlatform/google-cloud-python"
AUTHOR = "Google LLC"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-google-auth \
    ${PYTHON_PN}-googleapis-common-protos \
    ${PYTHON_PN}-protobuf \
    ${PYTHON_PN}-pytz \
    ${PYTHON_PN}-requests \
    ${PYTHON_PN}-setuptools \
    ${PYTHON_PN}-six \
"

PR = "r0"

SRC_NAME = "google-api-core"
SRC_URI = "https://files.pythonhosted.org/packages/82/d9/fb6c7dc19075a3d24de77e7e15acbd0307aef4cb68cc2409b1a16ce6f9e5/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "2f34e36ef4a7748827f0ccb61af3df30"
SRC_URI[sha256sum] = "7ccfab741a333e8d4259d4bcd93d587ebacee0a41316d93440a9c0c230a999c6"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
