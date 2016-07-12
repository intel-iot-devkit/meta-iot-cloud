DESCRIPTION = "This package provides a unified command line interface to Amazon Web Services."
HOMEPAGE = "https://github.com/aws/aws-cli"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=1b30762855ee41c1072f34f754f44c70"

inherit setuptools

PR = "r0"

RDEPENDS_${PN} = "\
	groff \
	less \
	${PYTHON_PN}-botocore \
	${PYTHON_PN}-colorama \
	${PYTHON_PN}-docutils \
	${PYTHON_PN}-rsa \
	${PYTHON_PN}-s3transfer \
	${PYTHON_PN}-argparse \
	${PYTHON_PN}-difflib \
	${PYTHON_PN}-subprocess \
	${PYTHON_PN}-ctypes \
	${PYTHON_PN}-misc \
"

SRC_NAME = "aws-cli"

SRC_URI = "git://github.com/aws/${SRC_NAME}.git"
SRCREV = "9fd8eb3fe443929dbdd4c4dfe69a8d875a320d25"

S = "${WORKDIR}/git"
