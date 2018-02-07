DESCRIPTION = "Packages for Microsoft Azure IoT."
LICENSE = "MIT"

inherit packagegroup python-dir

PR = "r2"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "c python cli"

PACKAGECONFIG[c] = "\
	, \
	, \
	, \
	azure-iot-sdk \
	azure-iot-sdk-dev \
"

PACKAGECONFIG[python] = "\
	, \
	, \
	, \
	${PYTHON_PN}-azure-iot-sdk \
"

PACKAGECONFIG[cli] = "\
	, \
	, \
	, \
	${PYTHON_PN}-azure-cli \
"
