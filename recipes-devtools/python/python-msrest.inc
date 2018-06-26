DESCRIPTION = "AutoRest swagger generator Python client runtime."
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/msrest-for-python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://setup.py;beginline=1;endline=25;md5=7b39ceb8a4a3e31e5e3eccd4295e6a0f"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-datetime \
	${PYTHON_PN}-json \
	${PYTHON_PN}-logging \
	${PYTHON_PN}-netclient \
	${PYTHON_PN}-numbers \
	${PYTHON_PN}-xml \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-isodate \
	${PYTHON_PN}-oauthlib \
	${PYTHON_PN}-requests \
	${PYTHON_PN}-requests-oauthlib \
"

PR = "r0"

SRC_URI[md5sum] = "dae00feebf85e56659d83daeee196ccb"
SRC_URI[sha256sum] = "bb509ee6228eba9062024de5396a2e50856b9cd3aba411870468faf24c872b00"