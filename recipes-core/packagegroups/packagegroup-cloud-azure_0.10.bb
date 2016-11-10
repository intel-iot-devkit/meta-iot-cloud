DESCRIPTION = "Packages for Microsoft Azure IoT."
LICENSE = "MIT"

inherit packagegroup

PR = "r2"

RDEPENDS_${PN} = "\
	azure-iot-sdk \
	azure-iot-sdk-dev \
	azure-iot-sdk-samples \
	python-azure-iot-sdk \
	node-red-contrib-azureiothubnode \
	node-azure-iot-device \
	node-azure-iot-device-amqp \
	node-azure-iot-device-amqp-ws \
	node-azure-iot-device-http \
	node-azure-iot-device-mqtt \
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
	azure-iot-gateway-sdk-java-binding \
	iothub-java-device-client \
	, \
"
