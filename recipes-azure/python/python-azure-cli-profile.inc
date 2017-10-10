DESCRIPTION = "Microsoft Azure Command-Line Tools Profile Command Module"

PV = "2.0.14"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-adal \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "bcb2c426df730e4f1d7d5a07e015ee65ba5b5f79"

SRC_DIR = "src/command_modules/azure-cli-profile"
