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

SRC_URI[sha256sum] = "4ea6386fe5870ecbb0af46dccff30e30f22abe5bca255305bf35d00820a175d1"
