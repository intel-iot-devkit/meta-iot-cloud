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
	azure-iot-gateway-sdk \
	azure-iot-gateway-sdk-dev \
	azure-iot-gateway-sdk-modules \
	azure-iot-gateway-sdk-samples \
"

PACKAGECONFIG[python] = "\
	, \
	, \
	, \
	${PYTHON_PN}-azure-iot-sdk \
"

PACKAGECONFIG[java] = "\
	, \
	, \
	, \
	azure-iot-gateway-sdk-java \
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
