DESCRIPTION = "Packages for IBM Bluemix & Watson platforms."
LICENSE = "MIT"

inherit packagegroup

PR = "r1"

RDEPENDS_${PN} = "\
	ibm-iotf-embeddedc \
	ibm-iotf-embeddedc-dev \
	node-red-contrib-ibm-watson-iot \
	python-ibmiotf \
	node-ibmiotf \
	ibm-iotf-java \
"

PACKAGES = "${PN}"
