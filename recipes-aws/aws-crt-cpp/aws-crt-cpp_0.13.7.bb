DESCRIPTION = "C++ wrapper around the aws-c-* libraries. Provides Cross-Platform Transport Protocols and SSL/TLS implementations for C++."
AUTHOR = "Amazon"
HOMEPAGE = "https://github.com/awslabs/aws-crt-cpp"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

inherit cmake

DEPENDS += "\
    aws-c-auth \
    aws-c-cal \
    aws-c-common \
    aws-c-event-stream \
    aws-c-http \
    aws-c-io \
    aws-c-mqtt \
    aws-checksums \
"

SRC_URI = "git://github.com/awslabs/${BPN}.git;branch=main;rev=318ff472a659f5e832812e1567697f9c43aedf13 \
           file://Add-library-versioning.patch \
           file://Build-static-and-shared-libs.patch \
           file://Update-cmake-config-file.patch \
           "

PR = "r0"

S = "${WORKDIR}/git"

EXTRA_OECMAKE += "\
    -DBUILD_DEPS=OFF \
    -DBUILD_TESTING=OFF \
    -DCMAKE_PREFIX_PATH=${RECIPE_SYSROOT}/usr \
"
