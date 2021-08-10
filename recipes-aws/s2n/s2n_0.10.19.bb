DESCRIPTION = "s2n is a C99 implementation of the TLS/SSL protocols that is designed to be simple, small, fast, and with security as a priority."
AUTHOR = "Amazon"
HOMEPAGE = "https://github.com/awslabs/s2n"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=26d85861cd0c0d05ab56ebff38882975"

inherit cmake

DEPENDS += "\
    openssl \
"

SRC_URI = "\
    git://github.com/awslabs/${BPN}.git;branch=main \
    file://Fix-packaging-issues.patch \
"

SRCREV = "bf2db43b5ac5cc11d536bb8547c1a88bbb474360"

S = "${WORKDIR}/git"

EXTRA_OECMAKE += "\
    -DBUILD_SHARED_LIBS=ON \
    -DBUILD_TESTING=OFF \
    -DCMAKE_PREFIX_PATH=${RECIPE_SYSROOT}/usr \
"
