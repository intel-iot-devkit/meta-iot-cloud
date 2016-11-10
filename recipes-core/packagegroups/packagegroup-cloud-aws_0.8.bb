DESCRIPTION = "Packages for Amazon Web Services."
LICENSE = "MIT"

inherit packagegroup

RDEPENDS_${PN} = "\
	aws-iot-device-sdk-embedded-c \
	aws-iot-device-sdk-embedded-c-dev \
	aws-iot-device-sdk-embedded-c-samples \
	python-aws-iot-device-sdk \
	python-aws-iot-device-sdk-samples \
	node-aws-iot-device-sdk-js \
	python-awscli \
"

PR = "r1"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "java"
PACKAGECONFIG[java] = "\
	, \
	, \
	aws-iot-device-sdk-java \
	aws-iot-device-sdk-java-samples \
	, \
"
