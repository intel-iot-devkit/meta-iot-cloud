DESCRIPTION = "Microsoft Azure Command-Line Tools Storage Command Module"

PV = "2.0.10"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-multiapi-storage \
	${PYTHON_PN}-azure-mgmt-storage \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "700a805ff9e8cd829c300fe18fb4ee6361537280"

SRC_DIR = "src/command_modules/azure-cli-storage"
