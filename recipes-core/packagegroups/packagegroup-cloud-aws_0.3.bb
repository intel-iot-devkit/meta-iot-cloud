DESCRIPTION = "Packages for Amazon Web Services."
LICENSE = "MIT"

inherit packagegroup

RDEPENDS_${PN} = "\
	aws-iot-device-sdk-embedded-c \
	python-awscli \
"

PR = "r0"

PACKAGES = "${PN}"
