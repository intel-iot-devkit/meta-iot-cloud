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

RDEPENDS_${PN} += " \
    libcrypto \
"

SRC_URI = "\
    git://github.com/awslabs/${BPN}.git;branch=main \
    file://Build-static-and-shared-libs.patch \
"

# v0.5.6
SRCREV = "936ec2c9c5ef9f2eff3fea37b5a83fd15924c4b4"

PR = "r0"

S = "${WORKDIR}/git"

TARGET_CFLAGS += "-Wno-error=address"

EXTRA_OECMAKE += "\
    -DBUILD_TESTING=OFF \
    -DCMAKE_PREFIX_PATH=${RECIPE_SYSROOT}/usr \
"
