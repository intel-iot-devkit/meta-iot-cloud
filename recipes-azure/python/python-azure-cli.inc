DESCRIPTION = "Next generation multi-platform command line experience for Azure."

PR = "r0"

RDEPENDS_${PN} = "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-cli-component \
	${PYTHON_PN}-azure-cli-cloud \
	${PYTHON_PN}-azure-cli-context \
	${PYTHON_PN}-azure-cli-configure \
	${PYTHON_PN}-azure-cli-feedback \
	${PYTHON_PN}-azure-cli-network \
	${PYTHON_PN}-azure-cli-profile \
	${PYTHON_PN}-azure-cli-resource \
	${PYTHON_PN}-azure-cli-role \
	${PYTHON_PN}-azure-cli-storage \
	${PYTHON_PN}-azure-cli-vm \
"

SRC_DIR = "src/azure-cli"
