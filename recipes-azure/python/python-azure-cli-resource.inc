DESCRIPTION = "Microsoft Azure Command-Line Tools Resource Command Module"

PV = "0.1.2rc2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "3d05aed3c2b8df44d200337a85af3cb53a93b781"

SRC_DIR = "src/command_modules/azure-cli-resource"
