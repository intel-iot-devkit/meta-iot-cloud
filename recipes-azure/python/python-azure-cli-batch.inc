DESCRIPTION = "Microsoft Azure Command-Line Tools Batch Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-netclient \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-argcomplete \
    ${PYTHON_PN}-azure-batch \
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-azure-mgmt-batch \
    ${PYTHON_PN}-azure-mgmt-keyvault \
    ${PYTHON_PN}-knack \
    ${PYTHON_PN}-msrestazure \
    ${PYTHON_PN}-six \
"

SRC_URI[md5sum] = "147e3202a02188ccc3928fb36f641a93"
SRC_URI[sha256sum] = "a477af2df9595b53b169f43af49feddb1b23c56f615bdba1b287657c56ea0ef2"
