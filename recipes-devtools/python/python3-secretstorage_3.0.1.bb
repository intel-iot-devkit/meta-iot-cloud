LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE;md5=c49a7ec562572351456ea021b15dc882"

inherit setuptools3
require python-secretstorage.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-jeepney \
"

SRC_URI[md5sum] = "a30efe5f34e3f6c522ff2b3826f567ba"
SRC_URI[sha256sum] = "819087ca89c0d6c5711692f41fb26f786af9dcc5bb89d567722a66edfbb2a689"