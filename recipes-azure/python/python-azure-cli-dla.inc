DESCRIPTION = "Microsoft Azure Command-Line Tools Data Lake Analytics Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-netclient \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-argcomplete \
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-azure-mgmt-datalake-analytics \
    ${PYTHON_PN}-azure-mgmt-datalake-store \
    ${PYTHON_PN}-azure-mgmt-resource \
    ${PYTHON_PN}-knack \
    ${PYTHON_PN}-msrestazure \
"

SRC_URI[md5sum] = "b0a31a137f501af2888db2147e5700c4"
SRC_URI[sha256sum] = "c23e0eb00e32d2b0696ec2f530ba7ca05ff984d8301dfb5e714f59298b333fb8"