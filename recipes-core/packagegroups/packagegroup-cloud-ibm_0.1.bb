DESCRIPTION = "Packages for IBM Bluemix & Watson platforms."
LICENSE = "MIT"

inherit packagegroup

PR = "r1"

RDEPENDS_${PN} = "\
	ibm-iotf-embeddedc \
	ibm-iotf-embeddedc-dev \
	ibm-iot-nodered \
	python-ibmiotf \
"

PACKAGES = "${PN}"
