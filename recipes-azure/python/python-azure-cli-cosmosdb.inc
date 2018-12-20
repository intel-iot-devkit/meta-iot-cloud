DESCRIPTION = "Microsoft Azure Command-Line Tools Cosmos DB Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-json \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-argcomplete \
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-azure-mgmt-cosmosdb \
    ${PYTHON_PN}-azure-mgmt-resource \
    ${PYTHON_PN}-knack \
    ${PYTHON_PN}-pydocumentdb \
    ${PYTHON_PN}-requests \
"

SRC_URI[md5sum] = "c50ec6ff3854e0c4e984e809493817a5"
SRC_URI[sha256sum] = "3a4f619ad3679b6541c9deb8ffc063e74e64513fc290c37e8ddb004a122b04a4"