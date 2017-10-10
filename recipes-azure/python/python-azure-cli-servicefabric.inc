DESCRIPTION = "Microsoft Azure Service Fabric Command-Line Tools"

PV = "0.0.4"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-servicefabric \
	${PYTHON_PN}-azure-mgmt-keyvault \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-pyopenssl \
"

SRCREV = "993756b73ac125967d995fc8c1d7262586741b92"

SRC_DIR = "src/command_modules/azure-cli-servicefabric"
