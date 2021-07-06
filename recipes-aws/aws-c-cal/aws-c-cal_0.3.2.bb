DESCRIPTION = "AWS Crypto Abstraction Layer: Cross-Platform, C99 wrapper for cryptography primitives."
AUTHOR = "Amazon"
HOMEPAGE = "https://github.com/awslabs/aws-c-cal"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=34400b68072d710fecd0a2940a0d1658"

inherit cmake

DEPENDS += "\
    aws-c-common \
    openssl \
"

SRC_URI = "\
    git://github.com/awslabs/${BPN}.git;branch=main \
"

# v0.3.2
SRCREV = "71be8f5e95ab684f94dd6dac8a1953acfe66a3b8"

PR = "r0"

S = "${WORKDIR}/git"

EXTRA_OECMAKE += "\
    -DBUILD_SHARED_LIBS=ON \
    -DBUILD_TESTING=OFF \
    -DCMAKE_PREFIX_PATH=${RECIPE_SYSROOT}/usr \
"
