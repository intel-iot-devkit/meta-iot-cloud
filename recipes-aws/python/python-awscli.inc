DESCRIPTION = "This package provides a unified command line interface to Amazon Web Services."
HOMEPAGE = "https://github.com/aws/aws-cli"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=71a3e14f29ac5c23e1b5b934ca4ddfc9"

PR = "r0"

RDEPENDS_${PN} += "\
	groff \
	less \
	${PYTHON_PN}-botocore \
	${PYTHON_PN}-colorama \
	${PYTHON_PN}-docutils \
	${PYTHON_PN}-rsa \
	${PYTHON_PN}-s3transfer \
	${PYTHON_PN}-pyyaml \
	${PYTHON_PN}-difflib \
	${PYTHON_PN}-subprocess \
	${PYTHON_PN}-ctypes \
	${PYTHON_PN}-misc \
	${PYTHON_PN}-argparse \
	${PYTHON_PN}-unixadmin \
"

SRC_NAME = "aws-cli"

SRC_URI = "git://github.com/aws/${SRC_NAME}.git"
SRCREV = "ecb5b6f1aba4cbd02d55809cde825ddf5340cedc"

S = "${WORKDIR}/git"
