DESCRIPTION = "AWS IoT SDK based on the AWS Common Runtime"
HOMEPAGE = "https://github.com/aws/aws-iot-device-sdk-python-v2"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/Apache-2.0;md5=89aea4e17d99a7cacdbeed46a0096b10"

inherit pypi setuptools3

RDEPENDS:${PN} += "\
    ${PYTHON_PN}-asyncio \
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-json \
"

RDEPENDS:${PN} += "\
    ${PYTHON_PN}-awscrt \
"

PR = "r0"

SRC_URI[sha256sum] = "a04467a3eb4f7de57fd76bf0d8d7f8050f40bd8101cd6716680e21ec5dd6ff05"
