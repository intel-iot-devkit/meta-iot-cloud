DESCRIPTION = "Packages for Microsoft Azure IoT."
LICENSE = "MIT"

inherit packagegroup python-dir

PR = "r0"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "c python java node-red cli"

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
	${PYTHON_PN}-azure-iothub-device-client \
	${PYTHON_PN}-azure-iothub-service-client \
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

PACKAGECONFIG[cli] = "\
	, \
	, \
	, \
	${PYTHON_PN}-azure-cli \
"
