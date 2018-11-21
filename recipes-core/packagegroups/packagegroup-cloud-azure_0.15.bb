DESCRIPTION = "Packages for Microsoft Azure IoT."
LICENSE = "MIT"

inherit packagegroup

PR = "r1"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "c python java node-red"

PACKAGECONFIG[c] = "\
	, \
	, \
	, \
	azure-iot-sdk-c \
	azure-iot-sdk-c-dev \
	azure-iot-edge \
	azure-iot-edge-dev \
	azure-iot-edge-modules \
	azure-iot-edge-samples \
"

PACKAGECONFIG[python] = "\
	, \
	, \
	, \
	python-azure-iothub-device-client \
	python-azure-iothub-service-client \
	python-azure-cli \
"

PACKAGECONFIG[python3] = "\
	, \
	, \
	, \
	python3-azure-cli \
"

PACKAGECONFIG[java] = "\
	, \
	, \
	, \
	azure-iot-edge-java \
"

PACKAGECONFIG[node-red] = "\
	, \
	, \
	, \
	node-red-contrib-azureiothubnode \
"
