DESCRIPTION = "Cloud service provider packages."
LICENSE = "MIT"

inherit packagegroup

PACKAGES = "\
	packagegroup-ibm-cloud \
"

DEPENDS_packagegroup-ibm-cloud = "\
	iotf-embeddedc \
	iot-nodered \
	python-ibmiotf \
"
