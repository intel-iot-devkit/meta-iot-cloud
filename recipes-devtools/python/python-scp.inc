SUMMARY = "SCP module for Paramiko"
HOMEPAGE = "https://github.com/jbardin/scp.py"
AUTHOR = "James Bardin"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=fc264c65fb17b7db5237cf7ce1780769"

RDEPENDS:${PN} += "\
    ${PYTHON_PN}-io \
"

PR = "r0"

SRC_URI[md5sum] = "9874e188a4d6aa5c849f7a09feecbdb9"
SRC_URI[sha256sum] = "ea095dd1d0e131874bc9930c3965bce3d1d70be5adb2a30d811fcaea4708a9ee"