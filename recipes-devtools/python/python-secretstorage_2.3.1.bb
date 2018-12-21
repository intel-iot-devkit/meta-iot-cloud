LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE;md5=92214e82c91fbb5d6e7fde16aa674f9d"

inherit setuptools
require python-secretstorage.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-dbus \
"

SRC_URI[md5sum] = "3b9465831b069e2622973afb7deb7bc2"
SRC_URI[sha256sum] = "3af65c87765323e6f64c83575b05393f9e003431959c9395d1791d51497f29b6"