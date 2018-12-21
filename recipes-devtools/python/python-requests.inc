DESCRIPTION = "Python HTTP for Humans."
HOMEPAGE = "http://python-requests.org"
AUTHOR = "Kenneth Reitz"
SECTION = "devel/python"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=979d6a23b143e13ea0e5e3aa81248820"

PR = "r0"

SRC_NAME = "requests"

SRC_URI = "git://github.com/kennethreitz/${SRC_NAME}.git"
SRCREV = "7c67c4adf9020fe6e279f1633ca477ef2b89ae44"

S = "${WORKDIR}/git"

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-email \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-netserver \
"

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-chardet \
    ${PYTHON_PN}-idna \
    ${PYTHON_PN}-urllib3 \
    ${PYTHON_PN}-certifi \
    ${PYTHON_PN}-pyopenssl \
    ${PYTHON_PN}-cryptography \
    ${PYTHON_PN}-pysocks \
"

BBCLASSEXTEND = "native nativesdk"
