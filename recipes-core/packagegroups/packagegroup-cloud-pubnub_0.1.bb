DESCRIPTION = "Packages for PubNub."
LICENSE = "MIT"

inherit packagegroup python-dir

PR = "r0"

PACKAGES = "${PN}"

PACKAGECONFIG ??= "python"
PACKAGECONFIG[python] = "\
	, \
	, \
	, \
	${PYTHON_PN}-pubnub \
"
