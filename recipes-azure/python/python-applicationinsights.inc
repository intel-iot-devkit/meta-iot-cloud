DESCRIPTION = "This project extends the Application Insights API surface to support Python."
AUTHOR = "Microsoft"
HOMEPAGE = "https://github.com/Microsoft/ApplicationInsights-Python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=754d7ceca11772e3aecda377fa0ead2b"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-datetime \
	${PYTHON_PN}-json \
	${PYTHON_PN}-logging \
	${PYTHON_PN}-netclient \
	${PYTHON_PN}-threading \
"

PR = "r0"

SRC_URI[md5sum] = "1717f66fda51d583b80300aa609da63e"
SRC_URI[sha256sum] = "fdb929afe6291b18aa36ebaf70b1cf09172d3152d6451c81871802519d082400"