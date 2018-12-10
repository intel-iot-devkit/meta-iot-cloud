DESCRIPTION = "Packages for Microsoft Azure IoT."
LICENSE = "MIT"

inherit packagegroup

PR = "r0"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "c python node-red"

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
	python-azure-cli \
	python-azure-iothub-device-client \
	python-azure-iothub-provisioningserviceclient \
	python-azure-iothub-service-client \
"

PACKAGECONFIG[python3] = "\
	, \
	, \
	, \
	python3-azure-cli \
	python3-azure-iothub-provisioningserviceclient \
"

PACKAGECONFIG[node-red] = "\
	, \
	, \
	, \
	node-red-contrib-azureiothubnode \
"
