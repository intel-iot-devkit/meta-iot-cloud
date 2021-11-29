DESCRIPTION = "C99 implementation of the vnd.amazon.event-stream content-type."
AUTHOR = "Amazon"
HOMEPAGE = "https://github.com/awslabs/aws-c-event-stream"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

inherit cmake

DEPENDS += "\
    aws-c-common \
    aws-checksums \
    aws-c-io \
"

SRC_URI = "git://github.com/awslabs/${BPN}.git;protocol=https;branch=main \
           file://Build-static-and-shared-libs.patch \
"

# v0.2.7
SRCREV = "e87537be561d753ec82e783bc0929b1979c585f8"

PR = "r0"

S = "${WORKDIR}/git"

EXTRA_OECMAKE += "\
    -DBUILD_TESTING=OFF \
    -DCMAKE_PREFIX_PATH=${RECIPE_SYSROOT}/usr \
"
