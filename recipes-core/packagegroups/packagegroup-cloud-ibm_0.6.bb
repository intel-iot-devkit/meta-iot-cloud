DESCRIPTION = "Packages for IBM Bluemix & Watson platforms."
LICENSE = "MIT"

inherit packagegroup

PR = "r0"

RDEPENDS_${PN} = "\
	ibm-iotf-embeddedc \
	ibm-iotf-embeddedc-dev \
	ibm-iotf-embeddedc-samples \
	node-red-contrib-ibm-watson-iot \
	python-ibmiotf \
"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "java"
PACKAGECONFIG[java] = "\
	, \
	, \
	, \
	ibm-iotf-java \
"
