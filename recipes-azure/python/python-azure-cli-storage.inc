DESCRIPTION = "Microsoft Azure Command-Line Tools Storage Command Module"

PR = "r0"

require azure-cli-command-modules.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-datetime \
	${PYTHON_PN}-netclient \
	${PYTHON_PN}-shell \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-argcomplete \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-storage \
	${PYTHON_PN}-azure-multiapi-storage \
	${PYTHON_PN}-knack \
	${PYTHON_PN}-six \
"

SRC_URI[md5sum] = "d405c114ef3c24869eea6831fae8f0a8"
SRC_URI[sha256sum] = "b32ceab94c0661b8148325e441d1969d6be4790264c9875893da6b1b28db0efb"