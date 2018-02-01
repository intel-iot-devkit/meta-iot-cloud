DESCRIPTION = "Packages for Amazon Web Services."
LICENSE = "MIT"

inherit packagegroup python-dir

PR = "r2"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "python java cli"

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

PACKAGECONFIG[cli] = "\
	, \
	, \
	, \
	${PYTHON_PN}-awscli \
"
