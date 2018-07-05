HOMEPAGE = "https://github.com/Azure/azure-storage-python"
AUTHOR = "Microsoft Corporation"
LICENSE = "MIT"
LIC_FILES_CHKSUM ?= "file://${WORKDIR}/${PN}-${PV}-LICENSE;md5=72c7dbf512a49429b7f34597d3f12d4b"

SRC_URI += "https://github.com/Azure/azure-storage-python/raw/v${PV}-${SRC_NAME}/LICENSE.txt;downloadfilename=${PN}-${PV}-LICENSE;name=license"
SRC_URI[license.md5sum] = "72c7dbf512a49429b7f34597d3f12d4b"
SRC_URI[license.sha256sum] = "290343e6311b94fbac0eb3debe684d6d63ba29f0ac1c125c9abfb6362d73fde2"
