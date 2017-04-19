SUMMARY = "Cryptographic library for Python"
AUTHOR = "Helder Eijs"
HOMEPAGE = "http://www.pycryptodome.org"
LICENSE = "BSD-2-Clause"
LIC_FILES_CHKSUM = "file://LICENSE.rst;md5=690cd8c71f0367a558f24fe53d943a2e"

PR = "r0"

SRC_URI = "git://github.com/Legrandin/pycryptodome.git"
SRCREV = "603b9e6c71c8b6143fe723cede582c7a1f0b8eee"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
