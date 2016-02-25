DESCRIPTION = "Packages for IBM Bluemix & Watson platforms."
LICENSE = "MIT"

inherit packagegroup

RDEPENDS_${PN} = "\
	iotf-embeddedc \
	iotf-embeddedc-dev \
	iot-nodered \
	python-ibmiotf \
"
