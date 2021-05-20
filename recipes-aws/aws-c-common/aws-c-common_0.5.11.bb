DESCRIPTION = "Core c99 package for AWS SDK for C. Includes cross-platform primitives, configuration, data structures, and error handling."
AUTHOR = "Amazon"
HOMEPAGE = "https://github.com/awslabs/aws-c-common"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

inherit cmake

SRC_URI = "git://github.com/awslabs/${BPN}.git;branch=main;tag=v${PV} \
           file://Build-static-and-shared-libs.patch \
"

PR = "r0"

S = "${WORKDIR}/git"

EXTRA_OECMAKE += "\
    -DBUILD_TESTING=OFF \
"
