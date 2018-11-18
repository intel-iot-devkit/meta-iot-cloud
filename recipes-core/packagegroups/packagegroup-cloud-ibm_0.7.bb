DESCRIPTION = "Packages for IBM Cloud & Watson platforms."
LICENSE = "MIT"

inherit packagegroup python-dir

PR = "r1"

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
	${PYTHON_PN}-ibmiotf \
"

PACKAGECONFIG[node-red] = "\
	, \
	, \
	, \
	node-red-contrib-ibm-watson-iot \
"
