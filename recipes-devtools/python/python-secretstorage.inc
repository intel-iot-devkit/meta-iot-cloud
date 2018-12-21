DESCRIPTION = "Python bindings to FreeDesktop.org Secret Service API"
AUTHOR = "Dmitry Shachnev"
HOMEPAGE = "https://github.com/mitya57/secretstorage"

PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-crypt \
    ${PYTHON_PN}-math \
    ${PYTHON_PN}-netclient \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-cryptography \
"

PYPI_PACKAGE = "SecretStorage"

inherit pypi