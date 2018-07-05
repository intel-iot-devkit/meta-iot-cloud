DESCRIPTION = "Microsoft Azure Cognitive Services Management Client Library for Python"

PR = "r0"

require azure-mgmt-common.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-netclient \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-msrestazure \
"

PYPI_PACKAGE_EXT = "zip"

inherit pypi

SRC_URI[md5sum] = "29f518d98566528fdd3006c55c5c2f42"
SRC_URI[sha256sum] = "c3247f2786b996a5f328ebdaf65d31507571979e004de7a5ed0ff280f95d80b4"
