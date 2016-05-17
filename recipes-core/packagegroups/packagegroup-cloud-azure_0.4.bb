DESCRIPTION = "Packages for Microsoft Azure IoT."
LICENSE = "MIT"

inherit packagegroup

PR = "r1"

RDEPENDS_${PN} = "\
	azure-iot-sdk \
	azure-iot-sdk-dev \
	python-azure-iot-sdk \
	node-red-contrib-azureiothubnode \
	node-azure-iot-device \
"

PACKAGES = "${PN}"
