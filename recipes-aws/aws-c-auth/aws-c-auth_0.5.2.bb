DESCRIPTION = "C99 library implementation of AWS client-side authentication: standard credentials providers and signing."
AUTHOR = "Amazon"
HOMEPAGE = "https://github.com/awslabs/aws-c-auth"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

inherit cmake

DEPENDS += "\
    aws-c-cal \
    aws-c-http \
"

SRC_URI = "git://github.com/awslabs/${BPN}.git;protocol=https;branch=main \
           file://Build-static-and-shared-libs.patch \
"

# v0.5.2
SRCREV = "c74534c13264868bbbd14b419c291580d3dd9141"

PR = "r0"

S = "${WORKDIR}/git"

EXTRA_OECMAKE += "\
    -DBUILD_TESTING=OFF \
    -DCMAKE_PREFIX_PATH=${RECIPE_SYSROOT}/usr \
"
