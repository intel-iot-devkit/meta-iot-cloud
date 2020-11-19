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

SRC_URI = "\
    git://github.com/awslabs/${BPN}.git;branch=main;rev=d97577093330e9f1d429cd08e33dc97efc4b7006 \
    file://Add-library-versioning.patch \
"

PR = "r0"

S = "${WORKDIR}/git"

EXTRA_OECMAKE += "\
    -DBUILD_DEPS=OFF \
    -DBUILD_SHARED_LIBS=ON \
    -DBUILD_TESTING=OFF \
    -DCMAKE_PREFIX_PATH=${RECIPE_SYSROOT}/usr \
"
