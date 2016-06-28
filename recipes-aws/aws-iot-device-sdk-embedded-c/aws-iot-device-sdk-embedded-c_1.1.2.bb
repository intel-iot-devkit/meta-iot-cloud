DESCRIPTION = "SDK for connecting to AWS IoT from a device using embedded C."
HOMEPAGE = "https://github.com/aws/aws-iot-device-sdk-embedded-C"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=acc7a1bf87c055789657b148939e4b40"

FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

DEPENDS = "openssl"
RDEPENDS_${PN} = "openssl"

PACKAGES = "${PN} ${PN}-dev ${PN}-dbg"

SRC_URI = "https://s3.amazonaws.com/aws-iot-device-sdk-embedded-c/linux_mqtt_openssl-1.1.2.tar \
	   file://Makefile \
"
SRC_URI[md5sum] = "2793b89b6fdb68bc66f9f9c99f8f027f"
SRC_URI[sha256sum] = "35014b6625da9ac53536d6638531c2245b916bb813f8620c9fbb9ecb3ca1da63"

PR = "r0"

S = "${WORKDIR}"

do_install() {
	install -d ${D}${libdir}
    	oe_libinstall -C ${S} -so libawsiotsdk ${D}${libdir}

	install -d ${D}${includedir}
    	install -m 0644 ${S}/aws_iot_src/protocol/mqtt/*.h ${D}${includedir}
	install -m 0644 ${S}/aws_iot_src/shadow/*.h ${D}${includedir}
	install -m 0644 ${S}/aws_iot_src/utils/*.h ${D}${includedir}
}

FILES_${PN} = "${libdir}/*.so"
FILES_${PN}-dev += "${includedir}"
