DESCRIPTION = "Packages for IBM Cloud & Watson platforms."
LICENSE = "MIT"

inherit packagegroup

PR = "r0"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "c python node-red"

PACKAGECONFIG[c] = "\
	, \
	, \
	, \
	ibm-iotf-embeddedc \
	ibm-iotf-embeddedc-dev \
	ibm-iotf-embeddedc-samples \
"

PACKAGECONFIG[python] = "\
	, \
	, \
	, \
	python-ibmiotf \
"

PACKAGECONFIG[python3] = "\
	, \
	, \
	, \
	python3-ibmiotf \
"

PACKAGECONFIG[node-red] = "\
	, \
	, \
	, \
	node-red-contrib-ibm-watson-iot \
"
