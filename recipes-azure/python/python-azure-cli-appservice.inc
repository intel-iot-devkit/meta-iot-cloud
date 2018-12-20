DESCRIPTION = "Microsoft Azure Command-Line Tools AppService Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-misc \
    ${PYTHON_PN}-netclient \
    ${PYTHON_PN}-threading \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-argcomplete \
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-azure-mgmt-containerregistry \
    ${PYTHON_PN}-azure-mgmt-resource \
    ${PYTHON_PN}-azure-mgmt-storage \
    ${PYTHON_PN}-azure-mgmt-web \
    ${PYTHON_PN}-certifi \
    ${PYTHON_PN}-knack \
    ${PYTHON_PN}-msrestazure \
    ${PYTHON_PN}-pyopenssl \
    ${PYTHON_PN}-requests \
    ${PYTHON_PN}-six \
    ${PYTHON_PN}-urllib3 \
    ${PYTHON_PN}-xmltodict \
    ${PYTHON_PN}-vsts-cd-manager \
"

SRC_URI[md5sum] = "8394d92b988b41b4065a13666e70e0c7"
SRC_URI[sha256sum] = "2c9f5f354ea40cac4ff2fcd5dde472e1f2d0d68031c4bf49fd9c40ab464e4911"
