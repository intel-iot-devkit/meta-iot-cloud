DESCRIPTION = "Microsoft Azure Command-Line Tools Network Command Module"

PV = "2.0.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-network \
	${PYTHON_PN}-azure-mgmt-trafficmanager \
	${PYTHON_PN}-azure-mgmt-dns \
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "648231a0cdb08fcf643989f68461bcdaf3d98141"

SRC_DIR = "src/command_modules/azure-cli-network"
