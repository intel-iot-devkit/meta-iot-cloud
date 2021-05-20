DESCRIPTION = "A common runtime for AWS Python projects"
HOMEPAGE = "https://github.com/awslabs/aws-crt-python"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

inherit setuptools3

DEPENDS += "\
    aws-c-auth \
    aws-c-cal \
    aws-c-common \
    aws-c-compression \
    aws-c-event-stream \
    aws-c-http \
    aws-c-io \
    aws-c-mqtt \
    aws-c-s3 \
    aws-checksums \
    cmake-native \
    s2n \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-asyncio \
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-netclient \
"

SRC_URI = "git://github.com/awslabs/aws-crt-python.git;branch=main;tag=v${PV}"

PR = "r0"

S = "${WORKDIR}/git"
