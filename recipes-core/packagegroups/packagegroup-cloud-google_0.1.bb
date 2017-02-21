DESCRIPTION = "Packages for the Google Cloud Platform."
LICENSE = "MIT"

inherit packagegroup

PR = "r0"

RDEPENDS_${PN} = "\
"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "python"
PACKAGECONFIG[python] = "\
	, \
	, \
	, \
	python-google-cloud \
"