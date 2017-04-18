DESCRIPTION = "Fulltext search and indexing module for Azure CLI"

PV = "0.0.2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-whoosh \
"

SRCREV = "6b3efbb6103d391cffd33d2831e0c96b300574df"

SRC_DIR = "src/command_modules/azure-cli-find"
