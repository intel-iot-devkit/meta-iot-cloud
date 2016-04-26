DESCRIPTION = "This package provides a unified command line interface to Amazon Web Services."
HOMEPAGE = "https://github.com/aws/aws-cli"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=1b30762855ee41c1072f34f754f44c70"

inherit setuptools

PR = "r1"

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

SRC_NAME = "aws-cli"

SRC_URI = "https://github.com/aws/${SRC_NAME}/archive/${PV}.tar.gz"
SRC_URI[md5sum] = "591ab3e1ff3a8493bcca3443f934ea7b"
SRC_URI[sha256sum] = "594b1cf49847cbe5287bcd69eb6a149837a5aa61bc52c3c4103769c27e3c642d"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
