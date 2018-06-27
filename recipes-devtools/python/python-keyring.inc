DESCRIPTION = "Store and access your passwords safely."
AUTHOR = "Kang Zhang"
HOMEPAGE = "https://github.com/jaraco/keyring"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=a33f38bbf47d48c70fe0d40e5f77498e"

PR = "r0"

SRC_URI[md5sum] = "f004a044737676031cd80e20deeb08ae"
SRC_URI[sha256sum] = "971699318f8a882da4193f0c2f87ae974e34c777fdfb59f89b50105cd678f4d9"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-logging \
	${PYTHON_PN}-netclient \
	${PYTHON_PN}-pickle \
	${PYTHON_PN}-unixadmin \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-dbus \
	${PYTHON_PN}-entrypoints \
	${PYTHON_PN}-secretstorage \
"