DESCRIPTION = "Microsoft Azure Command-Line Tools Role Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-netclient \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-azure-mgmt-authorization \
    ${PYTHON_PN}-azure-mgmt-monitor \
    ${PYTHON_PN}-azure-graphrbac \
    ${PYTHON_PN}-azure-keyvault \
    ${PYTHON_PN}-dateutil \
    ${PYTHON_PN}-knack \
    ${PYTHON_PN}-msrestazure \
    ${PYTHON_PN}-pyopenssl \
"

SRC_URI[md5sum] = "cd21ad1e92199a3d611b16a1ba7cbce5"
SRC_URI[sha256sum] = "692539775c5bdb5e9b289060ecb9a4fb52a2c9457e39829aea2f73865fa3538b"