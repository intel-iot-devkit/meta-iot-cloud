DESCRIPTION = "Packages for the Google Cloud Platform."
LICENSE = "MIT"

inherit packagegroup

PR = "r0"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "node-red cli"

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
