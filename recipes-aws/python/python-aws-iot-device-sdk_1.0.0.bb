DESCRIPTION = "The AWS IoT Device SDK for Python allows developers to write Python script to use their devices to access the AWS IoT platform through MQTT or MQTT over the WebSocket protocol."
HOMEPAGE = "https://github.com/aws/aws-iot-device-sdk-python"
AUTHOR = "Amazon Web Services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=9ac49901b833e769c7d6f21e8dbd7b30"

inherit setuptools

PR = "r0"

RDEPENDS_${PN} = "\
"

PACKAGES = "${PN} ${PN}-samples"

SRC_NAME = "aws-iot-device-sdk-python"

SRC_URI = "https://github.com/aws/${SRC_NAME}/archive/v${PV}.tar.gz"
SRC_URI[md5sum] = "f57a0576d1ba67c9b38b10032bb24edd"
SRC_URI[sha256sum] = "b40ce9facdce21e6f3da31c5ced00644227d83dbb24103aa985382059810949d"

S = "${WORKDIR}/${SRC_NAME}-${PV}"

do_install_append() {
	# Samples
	install -d ${D}${datadir}/awsiotsdk/samples/python
    	install -m 0755 ${S}/samples/basicPubSub/*.py ${D}${datadir}/awsiotsdk/samples/python/
	install -m 0755 ${S}/samples/basicShadow/*.py ${D}${datadir}/awsiotsdk/samples/python/
	install -m 0755 ${S}/samples/ThingShadowEcho/*.py ${D}${datadir}/awsiotsdk/samples/python/
}

## Samples ##
FILES_${PN}-samples += "${datadir}/awsiotsdk/samples/python"
