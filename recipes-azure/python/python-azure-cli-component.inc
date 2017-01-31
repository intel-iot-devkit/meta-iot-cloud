DESCRIPTION = "Microsoft Azure Command-Line Tools Component Command Module"

PV = "0.1.0rc2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "fc8755d147fae2668fb64000faafc709706ea51c"

SRC_DIR = "src/command_modules/azure-cli-component"
