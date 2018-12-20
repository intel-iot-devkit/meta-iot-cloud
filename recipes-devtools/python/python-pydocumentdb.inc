DESCRIPTION = "Azure DocumentDB Python SDK"
AUTHOR = "Microsoft"
HOMEPAGE = "https://github.com/Azure/azure-documentdb-python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=17f4c916859f94d1524ed9f5804c6727"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-crypt \
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-netclient \
    ${PYTHON_PN}-netclient \
    ${PYTHON_PN}-numbers \
    ${PYTHON_PN}-threading \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-requests \
    ${PYTHON_PN}-six \
"

SRC_URI[md5sum] = "5fb3c9d55443501546b834478d19a7f1"
SRC_URI[sha256sum] = "6704e16b7eb69b5fa8da7636d1926d9952aa43acf2fabdb1ed0a128987139eee"