DESCRIPTION = "A generic, spec-compliant, thorough implementation of the OAuth request-signing logic"
HOMEPAGE = "https://github.com/idan/oauthlib"
AUTHOR = "Idan Gazit"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE;md5=5ba9ce41463615e082609806255bce1b"

SRC_URI = "git://github.com/idan/oauthlib.git"
SRCREV = "38c563dbcf38b663717336dac74c88077efd2e1e"

PR = "r0"

S = "${WORKDIR}/git"

CLEANBROKEN = "1"

BBCLASSEXTEND = "native nativesdk"
