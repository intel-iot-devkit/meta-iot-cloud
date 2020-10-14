DESCRIPTION = "This package provides a unified command line interface to Amazon Web Services."
HOMEPAGE = "https://github.com/aws/aws-cli"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=7970352423db76abb33cbe303884afbf"

inherit pypi

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-compression \
    ${PYTHON_PN}-ctypes \
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-difflib \
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-math \
    ${PYTHON_PN}-netclient \
    ${PYTHON_PN}-numbers \
    ${PYTHON_PN}-pprint \
    ${PYTHON_PN}-shell \
    ${PYTHON_PN}-sqlite3 \
    ${PYTHON_PN}-unittest \
    ${PYTHON_PN}-xml \
"

RDEPENDS_${PN} += "\
    groff \
    less \
    ${PYTHON_PN}-botocore \
    ${PYTHON_PN}-colorama \
    ${PYTHON_PN}-docutils \
    ${PYTHON_PN}-pyyaml \
    ${PYTHON_PN}-rsa \
    ${PYTHON_PN}-s3transfer \
"

PR = "r0"

SRC_URI[sha256sum] = "59bb2bda1f85eafa380d39a06cdc7ecfa0ff37d0b5c2181ebe06cdb14ff58dc1"
