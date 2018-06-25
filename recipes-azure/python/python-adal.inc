DESCRIPTION = "Microsoft Azure Active Directory Authentication Library (ADAL) for Python"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/AzureAD/azure-activedirectory-library-for-python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${WORKDIR}/LICENSE;md5=bbfbc44677c93751d972e8b36751a695"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-crypt \
	${PYTHON_PN}-datetime \
	${PYTHON_PN}-json \
	${PYTHON_PN}-logging \
	${PYTHON_PN}-netclient \
	${PYTHON_PN}-threading \
	${PYTHON_PN}-xml \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-requests \
	${PYTHON_PN}-dateutil \
	${PYTHON_PN}-pyjwt \
"

SRC_URI += "https://github.com/AzureAD/azure-activedirectory-library-for-python/raw/${PV}/LICENSE;name=license"
SRC_URI[md5sum] = "b8ce8ac5e0afccf8747ff780211380b6"
SRC_URI[sha256sum] = "71b0e9b479320f76af4bcd268f7359580ba2e217228e83ff7529f51a9845f393"
SRC_URI[license.md5sum] = "bbfbc44677c93751d972e8b36751a695"
SRC_URI[license.sha256sum] = "b9e1c9b3b348a58186dd4fc69c994cf26c0ded0d91ebe4bd201e6f7d05ead8ec"