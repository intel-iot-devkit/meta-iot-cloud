DESCRIPTION = "The AWS SDK for Python"
HOMEPAGE = "https://github.com/boto/boto3"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=28780bb911646a2c7c13693a646f4efb"

inherit setuptools

PR = "r1"

RDEPENDS_${PN} = "\
	${PYTHON_PN}-botocore \
	${PYTHON_PN}-jmespath \
"

SRC_NAME = "boto3"

SRC_URI = "https://pypi.python.org/packages/source/b/${SRC_NAME}/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "b5a6cc7dc0e0c0969944f65db7f7b07f"
SRC_URI[sha256sum] = "8f85b9261a5b4606d883248a59ef1a4e82fd783602dbec8deac4d2ad36a1b6f4"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
