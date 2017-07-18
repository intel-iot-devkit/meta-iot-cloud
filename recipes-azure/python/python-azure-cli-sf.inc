DESCRIPTION = "Microsoft Azure Service Fabric Client Command-Line Tools"

PV = "1.0.5"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-servicefabric \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-adal \
"

SRCREV = "9975c629683f1348ab004bc276d6a4a7d2a3cb28"

SRC_DIR = "src/command_modules/azure-cli-sf"
