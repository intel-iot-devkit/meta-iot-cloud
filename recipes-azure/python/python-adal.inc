DESCRIPTION = "Microsoft Azure Active Directory Authentication Library (ADAL) for Python"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/AzureAD/azure-activedirectory-library-for-python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=bbfbc44677c93751d972e8b36751a695"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-requests \
    ${PYTHON_PN}-dateutil \
    ${PYTHON_PN}-cryptography \
    ${PYTHON_PN}-pyjwt \
"

SRC_NAME = "azure-activedirectory-library-for-python"

SRC_URI = "git://github.com/AzureAD/${SRC_NAME}.git;branch=dev"
SRCREV = "32db1369273e9daca9308ba367d764befbd9e044"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
