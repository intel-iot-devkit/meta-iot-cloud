DESCRIPTION = "Store and access your passwords safely."
AUTHOR = "Kang Zhang"
HOMEPAGE = "https://github.com/jaraco/keyring"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://README.rst;beginline=24;endline=25;md5=220c976d3f7a901d1fcff17c7ae7b165"

PR = "r0"

SRC_URI[md5sum] = "7e1957526a5d63d0da3f46a56e51dc59"
SRC_URI[sha256sum] = "91c31fd805b3ce6343406c7c51437f7505f3e9abb6e14ccac8242ea1fc912d77"

DEPENDS += "${PYTHON_PN}-setuptools-scm-native"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-logging \
	${PYTHON_PN}-netclient \
	${PYTHON_PN}-pickle \
	${PYTHON_PN}-unixadmin \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-dbus \
	${PYTHON_PN}-secretstorage \
"
