DESCRIPTION = "Microsoft Azure Command-Line Tools Network Command Module"

PV = "0.1.1b2"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-network \
	${PYTHON_PN}-azure-mgmt-trafficmanager \
	${PYTHON_PN}-azure-mgmt-dns \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "2d49d5719afa86e7919a769b9e1df3898eb8422c"

SRC_DIR = "src/command_modules/azure-cli-network"
