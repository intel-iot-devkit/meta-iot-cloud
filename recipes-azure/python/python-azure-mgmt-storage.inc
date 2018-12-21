DESCRIPTION = "Microsoft Azure Storage Resource Management Client Library for Python"

PV = "1.2.0"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-common \
    ${PYTHON_PN}-msrestazure \
"

SRCREV = "90b3771b1f6dc9673ffe13be1e380b4bd2d4a639"

FILES_${PN} = "\
    ${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/storage/* \
    ${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_storage-* \
"

SRC_DIR = "azure-mgmt-storage"

# Strip tests
distutils_do_install_append() {
    rm -rf ${D}${PYTHON_SITEPACKAGES_DIR}/tests
}
