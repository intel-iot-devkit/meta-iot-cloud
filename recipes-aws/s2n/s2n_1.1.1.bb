DESCRIPTION = "s2n-tls is a C99 implementation of the TLS/SSL protocols that is designed to be simple, small, fast, and with security as a priority."
AUTHOR = "Amazon"
HOMEPAGE = "https://github.com/aws/s2n-tls"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=26d85861cd0c0d05ab56ebff38882975"

inherit cmake

DEPENDS += "\
    openssl \
"

RDEPENDS:${PN} += "\
    libcrypto \
"

SRC_URI = "git://github.com/aws/s2n-tls.git;branch=main \
           file://Fix-packaging-issues.patch \
           file://Build-shared-and-static-libs.patch \
           "
# v1.0.5
SRCREV = "4513f8d707a68388990886d353e7cfe46cc6454b"

S = "${WORKDIR}/git"

TARGET_CC_ARCH += "${LDFLAGS}"
TARGET_CFLAGS += "-Wno-error=array-parameter -Wno-error=discarded-qualifiers"

EXTRA_OECMAKE += "\
    -DBUILD_TESTING=OFF \
    -DCMAKE_PREFIX_PATH=${RECIPE_SYSROOT}/usr \
"
