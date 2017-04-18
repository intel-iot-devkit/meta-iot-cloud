DESCRIPTION = "Microsoft Azure Command-Line Tools Role Command Module"

PV = "2.0.2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-authorization \
	${PYTHON_PN}-azure-graphrbac \
"

SRCREV = "80607313f925540651c95b9c03a06a0137abede2"

SRC_DIR = "src/command_modules/azure-cli-role"
