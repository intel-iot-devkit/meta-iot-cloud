DESCRIPTION = "Microsoft Azure Command-Line Tools Core Module"

PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-crypt \
    ${PYTHON_PN}-difflib \
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-math \
    ${PYTHON_PN}-misc \
    ${PYTHON_PN}-netclient \
    ${PYTHON_PN}-pprint \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-adal \
    ${PYTHON_PN}-applicationinsights \
    ${PYTHON_PN}-argcomplete \
    ${PYTHON_PN}-colorama \
    ${PYTHON_PN}-humanfriendly \
    ${PYTHON_PN}-knack \
    ${PYTHON_PN}-msrest \
    ${PYTHON_PN}-requests \
    ${PYTHON_PN}-six \
"

require azure-cli-common.inc

SRC_URI[md5sum] = "d8ce479ada541cfab61481ea33b5ad18"
SRC_URI[sha256sum] = "882cfb8e62276523ce8c63906f7a06cc584c32ff3765d31ee9c1ad16796e19ff"