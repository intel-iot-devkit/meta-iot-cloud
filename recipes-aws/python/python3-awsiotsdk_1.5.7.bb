DESCRIPTION = "AWS IoT SDK based on the AWS Common Runtime"
HOMEPAGE = "https://github.com/aws/aws-iot-device-sdk-python-v2"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/Apache-2.0;md5=89aea4e17d99a7cacdbeed46a0096b10"

inherit pypi setuptools3

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-asyncio \
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-json \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-awscrt \
"

PR = "r0"

SRC_URI[sha256sum] = "fe9a699cecfe41ee8993c2f3fa9dfa5f0cc89e3976fafac85a8f9d7c23a3890a"
