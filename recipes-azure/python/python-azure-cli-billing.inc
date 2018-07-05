DESCRIPTION = "Microsoft Azure Command-Line Tools Billing Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-billing \
	${PYTHON_PN}-knack \
	${PYTHON_PN}-six \
"

SRC_URI[md5sum] = "594527967bde86cc38fbc0dc905e7cd6"
SRC_URI[sha256sum] = "efa835f47e147eff8e7c36a08b537ba9da0436de147184aa9cf9ba3cdfd338c8"
