DESCRIPTION = "Packages for Amazon Web Services."
LICENSE = "MIT"

inherit packagegroup

RDEPENDS_${PN} = "\
	aws-iot-device-sdk-embedded-c \
	aws-iot-device-sdk-embedded-c-dev \
	python-aws-iot-device-sdk \
	python-aws-iot-device-sdk-samples \
	python-awscli \
"

PR = "r0"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "java cpp"
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
