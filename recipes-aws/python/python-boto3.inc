DESCRIPTION = "The AWS SDK for Python"
HOMEPAGE = "https://aws.amazon.com/sdk-for-python/"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=2ee41112a44fe7014dce33e26468ba93"

SRC_URI[sha256sum] = "454a8dfb7b367a058c7967ef6b4e2a192c318f10761769fd1003cf7f2f5a7db9"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-logging \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-botocore \
    ${PYTHON_PN}-jmespath \
    ${PYTHON_PN}-s3transfer \
"

inherit pypi

BBCLASSEXTEND = "native nativesdk"
