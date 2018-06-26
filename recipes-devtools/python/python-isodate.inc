DESCRIPTION = "An ISO 8601 date/time/duration parser and formatter"
HOMEPAGE = "https://github.com/gweis/isodate"
AUTHOR = "Gerhard Weis"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://setup.py;beginline=2;endline=27;md5=a0de0126e2ca03c5e0bcbadc70fd84e3"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-datetime \
	${PYTHON_PN}-numbers \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-six \
"

PR = "r0"

SRC_URI[md5sum] = "0e1203fce27ce65e2d01c5f21c4d428f"
SRC_URI[sha256sum] = "2e364a3d5759479cdb2d37cce6b9376ea504db2ff90252a2e5b7cc89cc9ff2d8"