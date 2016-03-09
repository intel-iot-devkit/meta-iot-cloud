DESCRIPTION = "This package provides a unified command line interface to Amazon Web Services."
HOMEPAGE = "https://github.com/aws/aws-cli"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=1b30762855ee41c1072f34f754f44c70"

inherit setuptools

RDEPENDS_${PN} = "\
	groff \
	less \
	${PYTHON_PN}-docutils \
	${PYTHON_PN}-colorama \
	${PYTHON_PN}-botocore \
	${PYTHON_PN}-rsa \
	${PYTHON_PN}-s3transfer \
	${PYTHON_PN}-argparse \
	${PYTHON_PN}-difflib \
	${PYTHON_PN}-subprocess \
	${PYTHON_PN}-ctypes \
	${PYTHON_PN}-misc \
"

SRC_NAME = "awscli"

SRC_URI = "https://pypi.python.org/packages/source/a/${SRC_NAME}/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "b6cb403e07065cd72e807f34dab7a944"
SRC_URI[sha256sum] = "c792ae655ca4e43643539026798d51bd65b2f5eee48bfaf048fe1c4c715f9467"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
