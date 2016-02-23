DESCRIPTION = "Eclipse Paho MQTT C client library"
HOMEPAGE = "http://www.eclipse.org/paho/"
LICENSE = "EPL-1.0 | EDL-1.0"

LIC_FILES_CHKSUM = " \
        file://edl-v10;md5=3adfcc70f5aeb7a44f3f9b495aa1fbf3 \
        file://epl-v10;md5=659c8e92a40b6df1d9e3dccf5ae45a08 \
"

DEPENDS = "openssl"
RDEPENDS_${PN} = "openssl"

PR = "r1"

SRC_NAME = "paho.mqtt.c"

SRC_URI = "https://github.com/eclipse/${SRC_NAME}/archive/v${PV}.tar.gz"
SRC_URI[md5sum] = "b2e64f6ae45995a19134b774ac233648"
SRC_URI[sha256sum] = "0a3ec3beb8e65da587a1a8da91daea2ec723bb245444877f69e1595c0e54b3e5"

S = "${WORKDIR}/${SRC_NAME}-${PV}"

do_install() {
    install -d ${D}${libdir}
    oe_libinstall -C build/output -so libpaho-mqtt3a ${D}${libdir}
    oe_libinstall -C build/output -so libpaho-mqtt3as ${D}${libdir}
    oe_libinstall -C build/output -so libpaho-mqtt3c  ${D}${libdir}
    oe_libinstall -C build/output -so libpaho-mqtt3cs ${D}${libdir}

    install -d ${D}${includedir}
    install -m 644 src/MQTTAsync.h ${D}${includedir}
    install -m 644 src/MQTTClient.h ${D}${includedir}
    install -m 644 src/MQTTClientPersistence.h ${D}${includedir}
}
