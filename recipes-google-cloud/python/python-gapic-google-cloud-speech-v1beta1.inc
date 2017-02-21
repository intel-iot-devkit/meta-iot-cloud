DESCRIPTION = "GAPIC library for the Google Cloud Speech API"
HOMEPAGE = "https://github.com/googleapis/googleapis"
AUTHOR = "Google Inc"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=2deedbf0e737771f60166811e74a6a92"

RDEPENDS_${PN} += " \
	${PYTHON_PN}-googleapis-common-protos \
	${PYTHON_PN}-google-gax \
	${PYTHON_PN}-proto-google-cloud-speech-v1beta1 \
	${PYTHON_PN}-oauth2client \
"

PR = "r0"

SRC_NAME = "gapic-google-cloud-speech-v1beta1"

SRC_URI = "https://pypi.python.org/packages/bf/fe/a12c906710741d2412447e1abb4444af44fdaf4d5fce2365d74cf9e8c038/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "79c2706a4f05779508618669c9d569e0"
SRC_URI[sha256sum] = "cef8409339b68be9b77c0f190445d51a7ceadaafe3622d37f149fffcd9587211"

S = "${WORKDIR}/${SRC_NAME}-${PV}"