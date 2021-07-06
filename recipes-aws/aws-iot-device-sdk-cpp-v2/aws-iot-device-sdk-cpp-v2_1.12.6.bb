DESCRIPTION = "Next generation AWS IoT Client SDK for C++ using the AWS Common Runtime"
AUTHOR = "Amazon"
HOMEPAGE = "https://github.com/aws/aws-iot-device-sdk-cpp-v2"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=f91e61641e7a96835dea6926a65f4702"

inherit cmake

DEPENDS += "\
    aws-crt-cpp \
    aws-c-iot \
"

SRC_URI = "git://github.com/aws/${BPN}.git;branch=main \
           file://Add-library-versioning-to-fix-packaging-issues.patch \
           file://Build-static-and-shared-libs.patch \
"

# v1.12.6
SRCREV = "df16ccb07cc303e2f7f9b01d8ecb511214025612"

PR = "r0"

S = "${WORKDIR}/git"

EXTRA_OECMAKE += "\
    -DBUILD_DEPS=OFF \
    -DBUILD_SAMPLES=OFF \
    -DBUILD_TESTING=OFF \
    -DCMAKE_PREFIX_PATH=${RECIPE_SYSROOT}/usr \
"

FILES_${PN} += "\
    ${libdir}/*-cpp \
"
