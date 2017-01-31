DESCRIPTION = "Microsoft Azure Service Bus Client Library for Python"

PV = "0.21.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-requests \
"

SRCREV = "b176bd2d1b6985c72b5eeb7adb8bda0ce7c3afb6"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/servicebus/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_servicebus-* \
"

distutils_do_install_append() {
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.py
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.pyc
}

SRC_DIR = "azure-servicebus"
