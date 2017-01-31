DESCRIPTION = "Microsoft Azure Command-Line Tools Resource Command Module"

PV = "0.1.1b2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "a03040c76351460cbd5e8297bec492c7404d9890"

SRC_DIR = "src/command_modules/azure-cli-resource"
