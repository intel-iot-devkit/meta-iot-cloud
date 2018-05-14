DESCRIPTION = "Packages for the Google Cloud Platform."
LICENSE = "MIT"

inherit packagegroup python-dir

PR = "r1"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "python cli"

PACKAGECONFIG[python] = "\
	, \
	, \
	, \
	${PYTHON_PN}-google-cloud \
"

PACKAGECONFIG[cli] = "\
	, \
	, \
	, \
	google-cloud-sdk \
"
