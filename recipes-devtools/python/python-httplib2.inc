DESCRIPTION = "A comprehensive HTTP client library."
AUTHOR = "Joe Gregorio"
HOMEPAGE = "https://github.com/httplib2/httplib2"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${WORKDIR}/${PN}-${PV}-license;md5=56e5e931172b6164b62dc7c4aba6c8cf"

PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-compression \
	${PYTHON_PN}-crypt \
	${PYTHON_PN}-datetime \
	${PYTHON_PN}-email \
	${PYTHON_PN}-io \
	${PYTHON_PN}-math \
	${PYTHON_PN}-netclient \
"

SRC_URI += "${HOMEPAGE}/raw/v${PV}/LICENSE;downloadfilename=${PN}-${PV}-license;name=license"
SRC_URI[license.md5sum] = "56e5e931172b6164b62dc7c4aba6c8cf"
SRC_URI[license.sha256sum] = "589eec38f72df2be203711d3b8cbece9b908c5e7ff00bc3cab7f63bae9e366b4"

SRC_URI[md5sum] = "9aa3e074da9a235cd675dd65e1fbcf39"
SRC_URI[sha256sum] = "e71daed9a0e6373642db61166fa70beecc9bf04383477f84671348c02a04cbdf"