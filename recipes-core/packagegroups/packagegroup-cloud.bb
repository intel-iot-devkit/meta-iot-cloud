DESCRIPTION = "Cloud service provider packages."
LICENSE = "MIT"

inherit packagegroup

PROVIDES = "${PACKAGES}"

PACKAGES = "\
	packagegroup-ibm-cloud \
"

RDEPENDS_packagegroup-ibm-cloud = "\
	iotf-embeddedc \
	iotf-embeddedc-dev \
	iot-nodered \
	python-ibmiotf \
"
