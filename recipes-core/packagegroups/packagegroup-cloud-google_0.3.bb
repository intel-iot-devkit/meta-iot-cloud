DESCRIPTION = "Packages for the Google Cloud Platform."
LICENSE = "MIT"

inherit packagegroup

PR = "r2"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "python cli"

PACKAGECONFIG[python] = "\
	, \
	, \
	, \
	python-google-cloud \
"

PACKAGECONFIG[cli] = "\
	, \
	, \
	, \
	google-cloud-sdk \
"
