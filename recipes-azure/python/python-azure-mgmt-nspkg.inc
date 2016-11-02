DESCRIPTION = "Microsoft Azure Resource Management Namespace Package"

PR = "r0"

RDEPENDS_${PN} = "\
	${PYTHON_PN}-azure-nspkg \
"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/*.py \
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/*.pyc \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_nspkg-* \
"

distutils_do_install_append() {
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.py
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.pyc
}

SRC_DIR = "azure-mgmt-nspkg"
SRCREV = "5f9a6d994ee2d76daa4fb105b6b54d82bc64a201"
