DESCRIPTION = "Packages for Amazon Web Services."
LICENSE = "MIT"

inherit packagegroup

PR = "r3"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "python java cpp cli"

PACKAGECONFIG[python] = "\
	, \
	, \
	, \
	python-aws-iot-device-sdk \
	python-aws-iot-device-sdk-samples \
	python-awscli \
"

PACKAGECONFIG[python3] = "\
	, \
	, \
	, \
	python3-aws-iot-device-sdk \
	python3-aws-iot-device-sdk-samples \
	python3-awscli \
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
	aws-iot-device-sdk-cpp-samples \
"
