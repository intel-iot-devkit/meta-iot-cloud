DESCRIPTION = "C99 implementation of the HTTP/1.1 and HTTP/2 specifications"
AUTHOR = "Amazon"
HOMEPAGE = "https://github.com/awslabs/aws-c-http"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

inherit cmake

DEPENDS += "\
    aws-c-compression \
    aws-c-io \
"

SRC_URI = "git://github.com/awslabs/${BPN}.git;branch=main \
           file://Build-static-and-shared-libs.patch \
           "

# v0.6.4
SRCREV = "fa1692ae103dcc40e3d0a9db1b29acfc204a294e"

PR = "r0"

S = "${WORKDIR}/git"

EXTRA_OECMAKE += "\
    -DBUILD_TESTING=OFF \
    -DCMAKE_PREFIX_PATH=${RECIPE_SYSROOT}/usr \
"

TARGET_CFLAGS += "-Wno-error=maybe-uninitialized"
