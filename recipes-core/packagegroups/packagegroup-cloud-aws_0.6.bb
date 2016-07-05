DESCRIPTION = "Packages for Amazon Web Services."
LICENSE = "MIT"

inherit packagegroup

RDEPENDS_${PN} = "\
	aws-iot-device-sdk-embedded-c \
	aws-iot-device-sdk-embedded-c-dev \
	python-aws-iot-device-sdk \
	python-aws-iot-device-sdk-samples \
	aws-iot-device-sdk-java \
	node-aws-iot-device-sdk-js \
	python-awscli \
"

PR = "r0"

PACKAGES = "${PN}"
