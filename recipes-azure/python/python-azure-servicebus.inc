DESCRIPTION = "Microsoft Azure Service Bus Client Library for Python"

PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-requests \
"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/servicebus/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_servicebus-* \
"

distutils_do_install_append() {
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.py
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.pyc
}

SRC_DIR = "azure-servicebus"
SRCREV = "fccf37ae25b10fab4a8c94549dcabb7f6957e16f"
