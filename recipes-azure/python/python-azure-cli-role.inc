DESCRIPTION = "Microsoft Azure Command-Line Tools Role Command Module"

PV = "0.1.2.rc2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-authorization \
	${PYTHON_PN}-azure-graphrbac \
"

SRCREV = "275d600e505228c6db6d3510eb5935baa2e97ca6"

SRC_DIR = "src/command_modules/azure-cli-role"
