DESCRIPTION = "Packages for Microsoft Azure IoT."
LICENSE = "MIT"

inherit packagegroup

PR = "r1"

RDEPENDS_${PN} = "\
	azure-iot-sdk-c \
	azure-iot-sdk-c-dev \
	python-azure-iot-sdk \
	node-red-contrib-azureiothubnode \
	node-iothub-explorer \
	azure-iot-gateway-sdk \
	azure-iot-gateway-sdk-dev \
	azure-iot-gateway-sdk-modules \
	azure-iot-gateway-sdk-samples \
	python-azure-cli \
"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "java"
PACKAGECONFIG[java] = "\
	, \
	, \
	, \
	azure-iot-sdk-java \
	azure-iot-gateway-sdk-java \
	azure-iot-device-sdk-java \
	azure-iot-device-sdk-java-samples \
"
