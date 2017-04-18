DESCRIPTION = "Next generation multi-platform command line experience for Azure."

PV = "2.0.3"
PR = "r0"

RDEPENDS_${PN} = "\
	bash \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-acr \
	${PYTHON_PN}-azure-cli-acs \
	${PYTHON_PN}-azure-cli-appservice \
	${PYTHON_PN}-azure-cli-batch \
	${PYTHON_PN}-azure-cli-cloud \
	${PYTHON_PN}-azure-cli-component \
	${PYTHON_PN}-azure-cli-configure \
	${PYTHON_PN}-azure-cli-container \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-cli-documentdb \
	${PYTHON_PN}-azure-cli-feedback \
	${PYTHON_PN}-azure-cli-find \
	${PYTHON_PN}-azure-cli-iot \
	${PYTHON_PN}-azure-cli-keyvault \
	${PYTHON_PN}-azure-cli-lab \
	${PYTHON_PN}-azure-cli-monitor \
	${PYTHON_PN}-azure-cli-network \
	${PYTHON_PN}-azure-cli-nspkg \
	${PYTHON_PN}-azure-cli-profile \
	${PYTHON_PN}-azure-cli-redis \
	${PYTHON_PN}-azure-cli-resource \
	${PYTHON_PN}-azure-cli-role \
	${PYTHON_PN}-azure-cli-sql \
	${PYTHON_PN}-azure-cli-storage \
	${PYTHON_PN}-azure-cli-vm \
"

SRCREV = "7665a31e1be0ea7aa96bac8e37167602af5b2917"

SRC_DIR = "src/azure-cli"
