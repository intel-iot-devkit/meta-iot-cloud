DESCRIPTION = "Microsoft Azure Container Service Client Library for Python"

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

SRC_URI[md5sum] = "155b65c68cfec0af60c34cba245ce176"
SRC_URI[sha256sum] = "60977434859806a709e426c4102179c473439b80baab10770d048f44f9ac690d"