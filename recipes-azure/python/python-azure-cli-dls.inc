DESCRIPTION = "Microsoft Azure Command-Line Tools Data Lake Store Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-azure-datalake-store \
    ${PYTHON_PN}-azure-mgmt-datalake-store \
    ${PYTHON_PN}-knack \
    ${PYTHON_PN}-msrestazure \
"

SRC_URI[md5sum] = "7247f6f2e9ffbf467b0ceadacd706e4c"
SRC_URI[sha256sum] = "e16b295db7fd41b1eb8aae7fa5f8c67dc69e58f82d6f6e8c7ee2bbb13d6213ec"