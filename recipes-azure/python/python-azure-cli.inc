DESCRIPTION = "Next generation multi-platform command line experience for Azure."

PR = "r1"

RDEPENDS_${PN} = "\
	${PYTHON_PN}-azure-cli-acr \
	${PYTHON_PN}-azure-cli-acs \
	${PYTHON_PN}-azure-cli-cloud \
	${PYTHON_PN}-azure-cli-component \
	${PYTHON_PN}-azure-cli-configure \
	${PYTHON_PN}-azure-cli-context \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-cli-devops \
	${PYTHON_PN}-azure-cli-feedback \
	${PYTHON_PN}-azure-cli-iot \
	${PYTHON_PN}-azure-cli-keyvault \
	${PYTHON_PN}-azure-cli-network \
	${PYTHON_PN}-azure-cli-profile \
	${PYTHON_PN}-azure-cli-redis \
	${PYTHON_PN}-azure-cli-resource \
	${PYTHON_PN}-azure-cli-role \
	${PYTHON_PN}-azure-cli-storage \
	${PYTHON_PN}-azure-cli-taskhelp \
	${PYTHON_PN}-azure-cli-vm \
	${PYTHON_PN}-azure-cli-webapp \
"

SRC_DIR = "src/azure-cli"
