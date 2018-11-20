DESCRIPTION = "Packages for IBM Cloud & Watson platforms."
LICENSE = "MIT"

inherit packagegroup

PR = "r1"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "c java python node-red"

PACKAGECONFIG[c] = "\
	, \
	, \
	, \
	ibm-iotf-embeddedc \
	ibm-iotf-embeddedc-dev \
	ibm-iotf-embeddedc-samples \
"

PACKAGECONFIG[java] = "\
	, \
	, \
	, \
	ibm-iotf-java \
"

PACKAGECONFIG[python] = "\
	, \
	, \
	, \
	python-ibmiotf \
"

PACKAGECONFIG[node-red] = "\
	, \
	, \
	, \
	node-red-contrib-ibm-watson-iot \
"
