DESCRIPTION = "Microsoft Azure Command-Line Tools Network Command Module"

PV = "2.0.3"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-network \
	${PYTHON_PN}-azure-mgmt-trafficmanager \
	${PYTHON_PN}-azure-mgmt-dns \
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "2b251339d4532aca0bdc9acf57a9f982c810c3f1"

SRC_DIR = "src/command_modules/azure-cli-network"
