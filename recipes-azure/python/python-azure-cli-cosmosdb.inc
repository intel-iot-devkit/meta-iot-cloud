DESCRIPTION = "Microsoft Azure Command-Line Tools Cosmos DB Command Module"

PV = "0.1.13"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-documentdb \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-pydocumentdb \
"

SRCREV = "9b3bc6451fa58d8512390e0595ee4e46df34cef3"

SRC_DIR = "src/command_modules/azure-cli-cosmosdb"
