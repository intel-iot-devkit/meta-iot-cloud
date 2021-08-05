DESCRIPTION = "Low-level, data-driven core of boto 3."
HOMEPAGE = "https://github.com/boto/botocore"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=2ee41112a44fe7014dce33e26468ba93"

SRC_URI[sha256sum] = "f0616d2c719691b94470307cee8adf89ceb1657b7b6f9aa1bf61f9de5543dbbb"

inherit pypi

RDEPENDS:${PN} += "\
    ${PYTHON_PN}-crypt \
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-email \
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-netclient \
    ${PYTHON_PN}-netserver \
    ${PYTHON_PN}-numbers \
    ${PYTHON_PN}-pprint \
    ${PYTHON_PN}-shell \
    ${PYTHON_PN}-unixadmin \
"

RDEPENDS:${PN} += "\
    ${PYTHON_PN}-jmespath \
    ${PYTHON_PN}-dateutil \
    ${PYTHON_PN}-urllib3 \
"

BBCLASSEXTEND = "native nativesdk"
