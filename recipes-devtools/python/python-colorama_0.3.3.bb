SUMMARY = "Cross-platform colored terminal text."
AUTHOR = "Arnon Yaari"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=14d0b64047ed8f510b51ce0495995358"

inherit setuptools

PR = "r0"

SRC_NAME = "colorama"

SRC_URI = "git://github.com/tartley/${SRC_NAME}.git"
SRCREV = "5906b2604223f3a3bdf4497244fc8861b89dbda6"

S = "${WORKDIR}/git"
