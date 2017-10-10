DESCRIPTION = "Microsoft Azure Command-Line Tools Cloud Command Module"

PV = "2.0.8"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "1f71609073091d7de98c0b59f6814ed172471264"

SRC_DIR = "src/command_modules/azure-cli-cloud"
