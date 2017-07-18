DESCRIPTION = "Microsoft Azure Command-Line Tools Cosmos DB Command Module"

PV = "0.1.10"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-documentdb \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-pydocumentdb \
"

SRCREV = "04a404d24719f690f226df4b621008bb32335ce0"

SRC_DIR = "src/command_modules/azure-cli-cosmosdb"
