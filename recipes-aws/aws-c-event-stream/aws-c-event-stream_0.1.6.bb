DESCRIPTION = "C99 implementation of the vnd.amazon.event-stream content-type."
AUTHOR = "Amazon"
HOMEPAGE = "https://github.com/awslabs/aws-c-event-stream"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

inherit cmake

DEPENDS += "\
    aws-c-common \
    aws-checksums \
"

SRC_URI = "\
    git://github.com/awslabs/${BPN}.git;branch=master;tag=v${PV} \
"

PR = "r0"

S = "${WORKDIR}/git"

EXTRA_OECMAKE += "\
    -DBUILD_SHARED_LIBS=ON \
    -DCMAKE_PREFIX_PATH=${RECIPE_SYSROOT}/usr \
"
