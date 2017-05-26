DESCRIPTION = "Microsoft Azure Command-Line Tools Network Command Module"

PV = "2.0.6"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-network \
	${PYTHON_PN}-azure-mgmt-trafficmanager \
	${PYTHON_PN}-azure-mgmt-dns \
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "10437b338cb66417175e3c7439e44fdc911047ab"

SRC_DIR = "src/command_modules/azure-cli-network"
