DESCRIPTION = "This package provides a unified command line interface to Amazon Web Services."
HOMEPAGE = "https://github.com/aws/aws-cli"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=71a3e14f29ac5c23e1b5b934ca4ddfc9"

RDEPENDS_${PN} += "\
    groff \
    less \
    ${PYTHON_PN}-botocore \
    ${PYTHON_PN}-colorama \
    ${PYTHON_PN}-ctypes \
    ${PYTHON_PN}-difflib \
    ${PYTHON_PN}-docutils \
    ${PYTHON_PN}-misc \
    ${PYTHON_PN}-pyyaml \
    ${PYTHON_PN}-rsa \
    ${PYTHON_PN}-s3transfer \
    ${PYTHON_PN}-unixadmin \
"

PR = "r0"

SRC_NAME = "aws-cli"

SRC_URI = "git://github.com/aws/${SRC_NAME}.git;protocol=https"
SRCREV = "59338c88372e5e15b57b438061d007dfeb0fbc3f"

S = "${WORKDIR}/git"
