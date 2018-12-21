DESCRIPTION = "GAPIC library for the Stackdriver Error Reporting API"
HOMEPAGE = "https://github.com/googleapis/googleapis"
AUTHOR = "Google Inc"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=2deedbf0e737771f60166811e74a6a92"

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-google-gax \
    ${PYTHON_PN}-oauth2client \
    ${PYTHON_PN}-proto-google-cloud-datastore-v1 \
    ${PYTHON_PN}-googleapis-common-protos \
"

PR = "r0"

SRC_NAME = "gapic-google-cloud-error-reporting-v1beta1"

SRC_URI = "https://pypi.python.org/packages/03/fb/903f4cb88a442e05ec789329aef76da0d3f841a66909e9b5bc39527e0ef7/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "cac9e80646b8780106e4fde2294eec67"
SRC_URI[sha256sum] = "39f3f8e974441fb57ea98d0be0f4cdedd18cda9a628aec31e1f0841affab6f16"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
