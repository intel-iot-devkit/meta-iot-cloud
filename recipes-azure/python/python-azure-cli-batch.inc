DESCRIPTION = "Microsoft Azure Command-Line Tools Batch Command Module"

PV = "0.1.1b4"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-batch \
	${PYTHON_PN}-azure-mgmt-batch \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "2e6b650a176d0666bdcffcd4f91ba5815b90b3eb"

SRC_DIR = "src/command_modules/azure-cli-batch"
