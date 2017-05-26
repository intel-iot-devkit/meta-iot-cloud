DESCRIPTION = "Microsoft Azure Command-Line Tools Storage Command Module"

PV = "2.0.6"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-multiapi-storage \
	${PYTHON_PN}-azure-mgmt-storage \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "44600ecf95ba46dd91c87fa451a4220ca5d457f0"

SRC_DIR = "src/command_modules/azure-cli-storage"
