DESCRIPTION = "Packages for the Google Cloud Platform."
LICENSE = "MIT"

inherit packagegroup python-dir

PR = "r0"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "python node-red cli"

PACKAGECONFIG[python] = "\
	, \
	, \
	, \
	${PYTHON_PN}-google-cloud \
"

PACKAGECONFIG[node-red] = "\
	, \
	, \
	, \
	node-red-contrib-google-cloud \
"

PACKAGECONFIG[cli] = "\
	, \
	, \
	, \
	google-cloud-sdk \
"
