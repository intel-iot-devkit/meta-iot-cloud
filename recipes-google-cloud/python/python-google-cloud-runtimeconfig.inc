DESCRIPTION = "Python Client for Google Cloud RuntimeConfig"

PV = "0.25.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-google-cloud-core \
"

SRCREV = "0ac5a24679a44de293d829b6537818b908d64ef2"

SRC_DIR = "runtimeconfig"
