DESCRIPTION = "Microsoft Azure Data Lake Management Namespace Package"

PV = "1.0.0"
PR = "r0"

RDEPENDS_${PN} = "\
	${PYTHON_PN}-azure-nspkg \
"

SRCREV = "d79f0884668a1c561b45c1e2a23e7f8845509271"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/datalake/*.py \
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/datalake/*.pyc \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_nspkg-* \
"

distutils_do_install_append() {
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.py
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.pyc
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/*.py
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/*.pyc
}

SRC_DIR = "azure-mgmt-datalake-nspkg"
