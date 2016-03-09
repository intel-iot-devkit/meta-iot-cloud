DESCRIPTION = "The AWS SDK for Python"
HOMEPAGE = "https://github.com/boto/boto3"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=28780bb911646a2c7c13693a646f4efb"

inherit setuptools

RDEPENDS_${PN} = "\
	${PYTHON_PN}-botocore \
	${PYTHON_PN}-jmespath \
"

SRC_NAME = "boto3"

SRC_URI = "https://pypi.python.org/packages/source/b/${SRC_NAME}/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "50284b2f79b7920e0b5821cdfa6743a0"
SRC_URI[sha256sum] = "bdfb52711a6467d82332be2f821f9d535243c7391b041f87f73e89c920e7e45f"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
