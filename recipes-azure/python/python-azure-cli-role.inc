DESCRIPTION = "Microsoft Azure Command-Line Tools Role Command Module"

PV = "2.0.4"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-authorization \
	${PYTHON_PN}-azure-graphrbac \
"

SRCREV = "b46e133c010f579622226a19261bd4f892db3488"

SRC_DIR = "src/command_modules/azure-cli-role"
