DESCRIPTION = "This package provides a unified command line interface to Amazon Web Services."
HOMEPAGE = "https://github.com/aws/aws-cli"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=1b30762855ee41c1072f34f754f44c70"

inherit pypi

RDEPENDS_${PN} += "groff less ${PYTHON_PN}-docutils ${PYTHON_PN}-colorama ${PYTHON_PN}-botocore ${PYTHON_PN}-rsa ${PYTHON_PN}-s3transfer ${PYTHON_PN}-argparse ${PYTHON_PN}-difflib ${PYTHON_PN}-subprocess ${PYTHON_PN}-ctypes ${PYTHON_PN}-misc"

SRC_URI[md5sum] = "6ec35cc8da5957d623c45f560e9dc5c3"
SRC_URI[sha256sum] = "5794cc065ab664e696aa953ef654c43cb0a48b351314cf90540afeb35ab41b6c"
