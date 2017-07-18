DESCRIPTION = "Microsoft Azure Command-Line Tools Network Command Module"

PV = "2.0.10"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-network \
	${PYTHON_PN}-azure-mgmt-trafficmanager \
	${PYTHON_PN}-azure-mgmt-dns \
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "f4bb0a221a017eefa1ce470f6c7c9550e44de648"

SRC_DIR = "src/command_modules/azure-cli-network"
