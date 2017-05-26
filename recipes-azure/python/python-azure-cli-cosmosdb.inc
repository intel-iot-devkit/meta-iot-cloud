DESCRIPTION = "Microsoft Azure Command-Line Tools Cosmos DB Command Module"

PV = "0.1.6"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-documentdb \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-pydocumentdb \
"

SRCREV = "c925f205c9ce8f47e6e626860e4972d7d1ad44aa"

SRC_DIR = "src/command_modules/azure-cli-cosmosdb"
