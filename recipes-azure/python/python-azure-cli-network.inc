DESCRIPTION = "Microsoft Azure Command-Line Tools Network Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-netclient \
    ${PYTHON_PN}-unittest \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-argcomplete \
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-azure-mgmt-dns \
    ${PYTHON_PN}-azure-mgmt-network \
    ${PYTHON_PN}-azure-mgmt-resource \
    ${PYTHON_PN}-azure-mgmt-trafficmanager \
    ${PYTHON_PN}-knack \
    ${PYTHON_PN}-msrestazure \
    ${PYTHON_PN}-six \
"

SRC_URI[md5sum] = "b70a28361661c55ff16734d3f10a2b0f"
SRC_URI[sha256sum] = "faa28e425225f92780067b33b3434e09182aee4b162db26e97b66687b9293c1a"