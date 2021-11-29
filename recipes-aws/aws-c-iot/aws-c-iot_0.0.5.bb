DESCRIPTION = "C99 implementation of AWS IoT cloud services integration with devices."
AUTHOR = "Amazon"
HOMEPAGE = "https://github.com/awslabs/aws-c-iot"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=2ee41112a44fe7014dce33e26468ba93"

inherit cmake

DEPENDS += "\
    aws-c-mqtt \
"

SRC_URI = "git://github.com/awslabs/${BPN}.git;protocol=https;branch=main \
           file://Build-static-and-shared-libs.patch \
"

# v0.0.5
SRCREV = "f2057934f5ea9072c47d42babe77e8d241982c90"

PR = "r0"

S = "${WORKDIR}/git"

EXTRA_OECMAKE += "\
    -DBUILD_TESTING=OFF \
    -DCMAKE_PREFIX_PATH=${RECIPE_SYSROOT}/usr \
"
