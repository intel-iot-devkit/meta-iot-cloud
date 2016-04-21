SUMMARY = "Extensions to the standard Python datetime module"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE;md5=51430b33c900f45f999c459ee29ca493"

inherit setuptools

PR = "r1"

SRC_NAME = "${PN}"

SRC_URI = "https://github.com/dateutil/dateutil/releases/download/${PV}/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "05ffc6d2cc85a7fd93bb245807f715ef"
SRC_URI[sha256sum] = "1408fdb07c6a1fa9997567ce3fcee6a337b39a503d80699e0f213de4aa4b32ed"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
