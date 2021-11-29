DESCRIPTION = "C99 implementation of the MQTT 3.1.1 specification."
AUTHOR = "Amazon"
HOMEPAGE = "https://github.com/awslabs/aws-c-mqtt"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

inherit cmake

DEPENDS += "\
    aws-c-io \
"

SRC_URI = "git://github.com/awslabs/${BPN}.git;protocol=https;branch=main \
           file://Build-static-and-shared-libs.patch \
"

# v0.7.6
SRCREV = "0a70bf814845e487b7e4862af7ad9e4a1199b5f4"

PR = "r0"

S = "${WORKDIR}/git"

PACKAGECONFIG ??= "websockets"
PACKAGECONFIG[websockets] = "-DMQTT_WITH_WEBSOCKETS:BOOL=ON, -DMQTT_WITH_WEBSOCKETS:BOOL=OFF, aws-c-http"

EXTRA_OECMAKE += "\
    -DBUILD_TESTING=OFF \
    -DCMAKE_PREFIX_PATH=${RECIPE_SYSROOT}/usr \
"
