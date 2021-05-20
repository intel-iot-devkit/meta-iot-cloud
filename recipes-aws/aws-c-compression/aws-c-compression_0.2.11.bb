DESCRIPTION = "This is a cross-platform C99 implementation of compression algorithms such as gzip, and huffman encoding/decoding."
AUTHOR = "Amazon"
HOMEPAGE = "https://github.com/awslabs/aws-c-compression"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

inherit cmake

DEPENDS += "\
    aws-c-common \
"

SRC_URI = "git://github.com/awslabs/${BPN}.git;branch=main;tag=v${PV} \
           file://Build-static-and-shared-libs.patch \
           "

PR = "r0"

S = "${WORKDIR}/git"

EXTRA_OECMAKE += "\
    -DBUILD_TESTING=OFF \
    -DCMAKE_PREFIX_PATH=${RECIPE_SYSROOT}/usr \
"
