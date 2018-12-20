DESCRIPTION = "Microsoft Azure Command-Line Tools Cloud Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-knack \
    ${PYTHON_PN}-msrestazure \
"

SRC_URI[md5sum] = "96276f8c69067e449f33b91ecc6af420"
SRC_URI[sha256sum] = "d21da77bab6d525e7d3cb29b93eadcd42fe39db0561e1c37a847d131f269ddd7"
