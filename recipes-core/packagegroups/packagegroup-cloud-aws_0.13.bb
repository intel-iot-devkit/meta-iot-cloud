DESCRIPTION = "Packages for Amazon Web Services."
LICENSE = "MIT"

inherit packagegroup python-dir

PR = "r0"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "python java cpp cli"

PACKAGECONFIG[python] = "\
	, \
	, \
	, \
	${PYTHON_PN}-aws-iot-device-sdk \
	${PYTHON_PN}-aws-iot-device-sdk-samples \
"

PACKAGECONFIG[java] = "\
	, \
	, \
	, \
	aws-iot-device-sdk-java \
	aws-iot-device-sdk-java-samples \
"

PACKAGECONFIG[cpp] = "\
	, \
	, \
	, \
	aws-iot-device-sdk-cpp \
	aws-iot-device-sdk-cpp-dev \
	aws-iot-device-sdk-cpp-cli \
	aws-iot-device-sdk-cpp-samples \
"

PACKAGECONFIG[python] = "\
	, \
	, \
	, \
	${PYTHON_PN}-awscli \
"
