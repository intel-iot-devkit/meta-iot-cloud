DESCRIPTION = "GAPIC library for the Google Cloud Speech API"
HOMEPAGE = "https://github.com/googleapis/googleapis"
AUTHOR = "Google Inc"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=2deedbf0e737771f60166811e74a6a92"

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-google-gax \
    ${PYTHON_PN}-oauth2client \
    ${PYTHON_PN}-proto-google-cloud-speech-v1 \
    ${PYTHON_PN}-googleapis-common-protos \
"

PR = "r0"

SRC_NAME = "gapic-google-cloud-speech-v1"

SRC_URI = "https://pypi.python.org/packages/d0/09/6175bf1f2813c624a025a2652f05bbd6019cf54c20a5ad0c2180296426b3/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "3394a9a1598860ebd81bf202c5cffdcf"
SRC_URI[sha256sum] = "65fe2419445be54c3f4c632621c00c9fb8679c415544f99fd9607717bf47f664"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
