DESCRIPTION = "Microsoft Azure Redis Cache Resource Management Client Library for Python"

PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/redis/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_redis-* \
"

distutils_do_install_append() {
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.py
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.pyc
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/*.py
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/*.pyc
}

SRC_DIR = "azure-mgmt-redis"
SRCREV = "f3650cc8b1a84aef80139ad1bed7341fe871c470"
