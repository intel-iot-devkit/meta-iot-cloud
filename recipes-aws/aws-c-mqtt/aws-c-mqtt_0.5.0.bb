DESCRIPTION = "C99 implementation of the MQTT 3.1.1 specification."
AUTHOR = "Amazon"
HOMEPAGE = "https://github.com/awslabs/aws-c-mqtt"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

inherit cmake

DEPENDS += "\
    aws-c-io \
"

SRC_URI = "\
    git://github.com/awslabs/${BPN}.git;branch=main \
"

# v0.5.0
SRCREV = "f4634671e6ef7674dde2fe3ae4f3dffacc1e87dc"

PR = "r0"

S = "${WORKDIR}/git"

PACKAGECONFIG ??= "websocket"
PACKAGECONFIG[websocket] = "-DMQTT_WITH_WEBSOCKETS:BOOL=ON, -DMQTT_WITH_WEBSOCKETS:BOOL=OFF, aws-c-http"

EXTRA_OECMAKE += "\
    -DBUILD_SHARED_LIBS=ON \
    -DBUILD_TESTING=OFF \
    -DCMAKE_PREFIX_PATH=${RECIPE_SYSROOT}/usr \
"
