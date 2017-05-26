DESCRIPTION = "Microsoft Azure Service Fabric Client Command-Line Tools"

PV = "1.0.1"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-servicefabric \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-adal \
"

SRCREV = "5d766cddf4180d65f52d1874963e6d46a112a9e2"

SRC_DIR = "src/command_modules/azure-cli-sf"
