DESCRIPTION = "Packages for Microsoft Azure IoT."
LICENSE = "MIT"

inherit packagegroup

PR = "r3"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "c python"

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

PACKAGECONFIG[python] = "\
	, \
	, \
	, \
	python-azure-iot-sdk \
	python-azure-cli \
"
