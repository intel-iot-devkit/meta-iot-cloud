DESCRIPTION = "Microsoft Azure Batch Client Library for Python"

PR = "r0"

require azure-sdk-common.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-crypt \
    ${PYTHON_PN}-datetime \
	${PYTHON_PN}-netclient \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-requests \
"

PYPI_PACKAGE_EXT = "zip"

inherit pypi

SRC_URI[md5sum] = "fafeec8a20214dfe1ef08a8812b715ef"
SRC_URI[sha256sum] = "cd71c7ebb5beab174b6225bbf79ae18d6db0c8d63227a7e514da0a75f138364c"
