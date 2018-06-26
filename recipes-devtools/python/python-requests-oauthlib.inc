DESCRIPTION = "OAuthlib authentication support for Requests."
HOMEPAGE = "https://github.com/requests/requests-oauthlib"
AUTHOR = "Kenneth Reitz"
LICENSE = "ISC"
LIC_FILES_CHKSUM = "file://LICENSE;md5=22d117a849df10d047ed9b792838e863"

RDEPENDS_${PN} += " \
	${PYTHON_PN}-json \
	${PYTHON_PN}-logging \
	${PYTHON_PN}-netclient \
"

RDEPENDS_${PN} += " \
	${PYTHON_PN}-oauthlib \
	${PYTHON_PN}-requests \
"

PR = "r0"

SRC_URI[md5sum] = "e867404084b688dbfb879b9ac9ac040a"
SRC_URI[sha256sum] = "8886bfec5ad7afb391ed5443b1f697c6f4ae98d0e5620839d8b4499c032ada3f"