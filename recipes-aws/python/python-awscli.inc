DESCRIPTION = "This package provides a unified command line interface to Amazon Web Services."
HOMEPAGE = "https://github.com/aws/aws-cli"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=1b30762855ee41c1072f34f754f44c70"

PR = "r0"

RDEPENDS_${PN} += "\
	groff \
	less \
	${PYTHON_PN}-botocore \
	${PYTHON_PN}-colorama \
	${PYTHON_PN}-docutils \
	${PYTHON_PN}-rsa \
	${PYTHON_PN}-s3transfer \
	${PYTHON_PN}-difflib \
	${PYTHON_PN}-subprocess \
	${PYTHON_PN}-ctypes \
	${PYTHON_PN}-misc \
"

SRC_NAME = "aws-cli"

SRC_URI = "git://github.com/aws/${SRC_NAME}.git"
SRCREV = "65f6cad1804c401ae943704456da5ad908587a44"

S = "${WORKDIR}/git"
