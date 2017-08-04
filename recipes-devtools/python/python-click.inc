DESCRIPTION = "A simple wrapper around optparse for powerful command line utilities."
HOMEPAGE = "http://github.com/mitsuhiko/click"
AUTHOR = "Armin Ronacher"
LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://LICENSE;md5=09e8b7869f94ba9e9a7b260d53c65dab"

SRC_URI = "git://github.com/pallets/click.git"
SRCREV = "df0e37dd890d36fc997986ae6d2b6c255f3ed1dc"

PR = "r0"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
