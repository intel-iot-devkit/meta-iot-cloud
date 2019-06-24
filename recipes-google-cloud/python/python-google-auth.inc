DESCRIPTION = "Google Authentication Library"
HOMEPAGE = "https://github.com/GoogleCloudPlatform/google-auth-library-python"
AUTHOR = "Google Cloud Platform"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=86d3f3a95c324c9479bd8986968f4327"

PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-netclient \
    ${PYTHON_PN}-pkgutil \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-cachetools \
    ${PYTHON_PN}-certifi \
    ${PYTHON_PN}-cryptography \
    ${PYTHON_PN}-grpcio \
    ${PYTHON_PN}-pyasn1-modules \
    ${PYTHON_PN}-requests \
    ${PYTHON_PN}-rsa \
    ${PYTHON_PN}-six \
    ${PYTHON_PN}-urllib3 \
"

SRC_URI[md5sum] = "0440718247cc4531422e2a8f4f012e8b"
SRC_URI[sha256sum] = "0f7c6a64927d34c1a474da92cfc59e552a5d3b940d3266606c6a28b72888b9e4"
