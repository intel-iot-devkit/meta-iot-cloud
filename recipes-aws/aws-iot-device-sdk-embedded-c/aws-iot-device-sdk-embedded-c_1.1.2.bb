DESCRIPTION = "SDK for connecting to AWS IoT from a device using embedded C."
HOMEPAGE = "https://github.com/aws/aws-iot-device-sdk-embedded-C"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=acc7a1bf87c055789657b148939e4b40"

FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

DEPENDS = "openssl"
RDEPENDS_${PN} = "openssl"

PACKAGES = "${PN} ${PN}-samples ${PN}-dev ${PN}-dbg"

SRC_URI = "https://s3.amazonaws.com/aws-iot-device-sdk-embedded-c/linux_mqtt_openssl-1.1.2.tar \
	   file://Makefile \
"
SRC_URI[md5sum] = "2793b89b6fdb68bc66f9f9c99f8f027f"
SRC_URI[sha256sum] = "35014b6625da9ac53536d6638531c2245b916bb813f8620c9fbb9ecb3ca1da63"

PR = "r2"

S = "${WORKDIR}"
SAMPLE_APPS = "${S}/sample_apps"

do_compile_append() {
	cd ${SAMPLE_APPS}/shadow_sample
	oe_runmake

	cd ${SAMPLE_APPS}/shadow_sample_console_echo
	oe_runmake

	cd ${SAMPLE_APPS}/subscribe_publish_sample
	oe_runmake
}

do_install() {
	install -d ${D}${libdir}
    	oe_libinstall -C ${S} -so libawsiotsdk ${D}${libdir}

	install -d ${D}${includedir}
    	install -m 0644 ${S}/aws_iot_src/protocol/mqtt/*.h ${D}${includedir}
	install -m 0644 ${S}/aws_iot_src/shadow/*.h ${D}${includedir}
	install -m 0644 ${S}/aws_iot_src/utils/*.h ${D}${includedir}

	# Samples
	install -d ${D}${datadir}/awsiotsdk/samples/c
    	install -m 0755 ${SAMPLE_APPS}/shadow_sample/shadow_sample ${D}${datadir}/awsiotsdk/samples/c/
	install -m 0755 ${SAMPLE_APPS}/shadow_sample_console_echo/shadow_console_echo ${D}${datadir}/awsiotsdk/samples/c/
	install -m 0755 ${SAMPLE_APPS}/subscribe_publish_sample/subscribe_publish_sample ${D}${datadir}/awsiotsdk/samples/c/
}

FILES_${PN} = "${libdir}/*.so"
FILES_${PN}-dev += "${includedir}"
FILES_${PN}-dbg += "${datadir}/awsiotsdk/samples/c/.debug"
FILES_${PN}-samples += "${datadir}/awsiotsdk/samples/c/shadow_sample \
			${datadir}/awsiotsdk/samples/c/shadow_console_echo \
			${datadir}/awsiotsdk/samples/c/subscribe_publish_sample \
"

RRECOMMENDS_aws-iot-device-sdk-embedded-c-dev = "openssl-dev glibc-dev"
RRECOMMENDS_aws-iot-device-sdk-embedded-c-dev[nodeprrecs] = "1"
