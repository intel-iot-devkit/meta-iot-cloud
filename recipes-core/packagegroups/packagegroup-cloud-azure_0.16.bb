DESCRIPTION = "Packages for Microsoft Azure IoT."
LICENSE = "MIT"

inherit packagegroup python-dir

PR = "r0"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "c python node-red cli"

PACKAGECONFIG[c] = "\
	, \
	, \
	, \
	azure-iot-sdk-c \
	azure-iot-sdk-c-dev \
"

PACKAGECONFIG[python] = "\
	, \
	, \
	, \
	${PYTHON_PN}-azure-iothub-device-client \
	${PYTHON_PN}-azure-iothub-service-client \
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
