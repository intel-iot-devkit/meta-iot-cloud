SUMMARY = "MQTT version 3.1/3.1.1 client library"
AUTHOR = "Roger Light"
HOMEPAGE = "http://eclipse.org/paho"
LICENSE = "EPL-1.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=eb48c6ee2cb9f5b8b9fe75e6f817bdfc"

PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-math \
        ${PYTHON_PN}-io \
        ${PYTHON_PN}-threading \
"

SRC_URI = "git://github.com/eclipse/paho.mqtt.python.git"
SRCREV = "377dad6a9da70a71ff59fcf5a26f86519bc244a6"

S = "${WORKDIR}/git"
