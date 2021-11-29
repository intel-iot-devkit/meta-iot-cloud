DESCRIPTION = "AWS Crypto Abstraction Layer: Cross-Platform, C99 wrapper for cryptography primitives."
AUTHOR = "Amazon"
HOMEPAGE = "https://github.com/awslabs/aws-c-cal"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=34400b68072d710fecd0a2940a0d1658"

inherit cmake

DEPENDS += "\
    aws-c-common \
    openssl \
"

RDEPENDS:${PN} += " \
    libcrypto \
"

SRC_URI = "\
    git://github.com/awslabs/${BPN}.git;protocol=https;branch=main \
    file://Build-static-and-shared-libs.patch \
"

# v0.5.12
SRCREV = "c4c5b175e05f2affe5e3f0203ca6c8bc5cdd8f51"

S = "${WORKDIR}/git"

TARGET_CFLAGS += "-Wno-error=address -Wno-error=deprecated-declarations"

EXTRA_OECMAKE += "\
    -DBUILD_TESTING=OFF \
    -DCMAKE_PREFIX_PATH=${RECIPE_SYSROOT}/usr \
"
