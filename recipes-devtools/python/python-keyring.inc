DESCRIPTION = "Store and access your passwords safely."
AUTHOR = "Kang Zhang"
HOMEPAGE = "https://github.com/jaraco/keyring"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://README.rst;md5=5d684c83afc5669b0f4e6223015f55c4"

SRC_NAME = "keyring"

SRC_URI = "git://github.com/jaraco/${SRC_NAME}.git"
SRCREV = "5da7cbef387db8f88cf23d1ebc6e6b0d3e64648c"

PR = "r0"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
