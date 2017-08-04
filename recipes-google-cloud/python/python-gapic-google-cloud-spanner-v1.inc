DESCRIPTION = "GAPIC library for the Cloud Spanner API"
HOMEPAGE = "https://github.com/googleapis/googleapis"
AUTHOR = "Google Inc"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=2deedbf0e737771f60166811e74a6a92"

RDEPENDS_${PN} += " \
	${PYTHON_PN}-google-gax \
	${PYTHON_PN}-oauth2client \
	${PYTHON_PN}-proto-google-cloud-spanner-v1 \
	${PYTHON_PN}-googleapis-common-protos \
"

PR = "r0"

SRC_NAME = "gapic-google-cloud-spanner-v1"

SRC_URI = "https://pypi.python.org/packages/65/7c/c5e8c27b280d1209e65b639818912e31412fdf1e216ca7b71af5674d3d08/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "42af8b894f890685c6a5eeec5740a5a6"
SRC_URI[sha256sum] = "96d1ddd3f37ce80b0ecc1535ffcabf4d3c2911c6013c7f6b556cfc833749f1da"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
