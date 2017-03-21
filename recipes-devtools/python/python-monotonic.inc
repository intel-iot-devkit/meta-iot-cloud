DESCRIPTION = "An implementation of time.monotonic() for Python 2 & < 3.3"
HOMEPAGE = "https://github.com/atdt/monotonic"
AUTHOR = "Ori Livneh"
SECTION = "devel/python"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=d2794c0df5b907fdace235a619d80314"

PR = "r0"

SRC_URI = "git://github.com/atdt/monotonic.git"
SRCREV = "5c0322dc559bf961f7e111d97cd3ed9ab5c1a73b"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
