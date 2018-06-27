DESCRIPTION = "AutoRest swagger generator Python client runtime. Azure-specific module."
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/msrestazure-for-python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://setup.py;beginline=1;endline=25;md5=7b39ceb8a4a3e31e5e3eccd4295e6a0f"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-datetime \
	${PYTHON_PN}-json \
	${PYTHON_PN}-logging \
	${PYTHON_PN}-math \
	${PYTHON_PN}-netclient \
	${PYTHON_PN}-pprint \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-adal \
	${PYTHON_PN}-keyring \
	${PYTHON_PN}-msrest \
	${PYTHON_PN}-oauthlib \
	${PYTHON_PN}-requests \
"

PR = "r0"

SRC_URI[md5sum] = "8d2bbd8cdbb1410c706f4ed7bb6e0743"
SRC_URI[sha256sum] = "4d8b33686021bcdf9bffc3ad0b120d1ce10d33e2535649897217fb9532b57e53"