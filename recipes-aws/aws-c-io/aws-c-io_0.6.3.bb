DESCRIPTION = "This is a module for the AWS SDK for C. It handles all IO and TLS work for application protocols."
AUTHOR = "Amazon"
HOMEPAGE = "https://github.com/awslabs/aws-c-io"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

inherit cmake

DEPENDS += "\
    aws-c-common \
    s2n \
"

SRC_URI = "\
    git://github.com/awslabs/${BPN}.git;branch=main \
"

# v0.6.3
SRCREV = "701279844ae43f9d275171bbdc80fcb1ba5a0065"

PR = "r0"

S = "${WORKDIR}/git"

EXTRA_OECMAKE += "\
    -DBUILD_SHARED_LIBS=ON \
    -DBUILD_TESTING=OFF \
    -DCMAKE_PREFIX_PATH=${RECIPE_SYSROOT}/usr \
"
