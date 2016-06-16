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

SRC_URI = "https://github.com/aws/${SRC_NAME}/archive/${PV}.tar.gz"
SRC_URI[md5sum] = "bea51579fe3e505510d7f44fc16c660c"
SRC_URI[sha256sum] = "7085c3c0be921803266e6262e5757b7e3980e232679e4bac0ec76af8a78383ca"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
