DESCRIPTION = "Microsoft Azure Command-Line Tools Role Command Module"

PV = "0.1.1b2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-authorization \
	${PYTHON_PN}-azure-graphrbac \
"

SRCREV = "12bfbda23540694370bcf1253eac7ea3cfecdf5a"

SRC_DIR = "src/command_modules/azure-cli-role"
