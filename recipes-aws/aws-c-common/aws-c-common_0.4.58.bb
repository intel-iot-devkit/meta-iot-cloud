DESCRIPTION = "Core c99 package for AWS SDK for C. Includes cross-platform primitives, configuration, data structures, and error handling."
AUTHOR = "Amazon"
HOMEPAGE = "https://github.com/awslabs/aws-c-common"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

inherit cmake

SRC_URI = "\
    git://github.com/awslabs/${BPN}.git;branch=main \
"

# v0.4.58
SRCREV = "d52cd2ff062ed68e2b551f6763abbc5f7d2d3b36"

PR = "r0"

S = "${WORKDIR}/git"

EXTRA_OECMAKE += "\
    -DBUILD_SHARED_LIBS=ON \
    -DBUILD_TESTING=OFF \
"
