DESCRIPTION = "Microsoft Azure Command-Line Tools Network Command Module"

PV = "0.1.2rc2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-network \
	${PYTHON_PN}-azure-mgmt-trafficmanager \
	${PYTHON_PN}-azure-mgmt-dns \
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "c0faf99f572990b7889be4745c09e2d9bdf792b3"

SRC_DIR = "src/command_modules/azure-cli-network"
