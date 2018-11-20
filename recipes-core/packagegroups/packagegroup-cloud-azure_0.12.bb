DESCRIPTION = "Packages for Microsoft Azure IoT."
LICENSE = "MIT"

inherit packagegroup

PR = "r3"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "c java node-red python"

PACKAGECONFIG[c] = "\
	, \
	, \
	, \
	azure-iot-sdk \
	azure-iot-sdk-dev \
	azure-iot-edge \
	azure-iot-edge-dev \
	azure-iot-edge-modules \
	azure-iot-edge-samples \
"

PACKAGECONFIG[java] = "\
	, \
	, \
	, \
	azure-iot-edge-java \
	azure-iot-edge-java-binding \
	azure-iot-device-sdk-java \
	azure-iot-device-sdk-java-samples \
"

PACKAGECONFIG[node-red] = "\
	, \
	, \
	, \
	node-red-contrib-azureiothubnode \
"

PACKAGECONFIG[python] = "\
	, \
	, \
	, \
	python-azure-cli \
"
