DESCRIPTION = "JSON for Modern C++"
HOMEPAGE = "https://github.com/nlohmann/json"
AUTHOR = "Niels Lohmann"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.MIT;md5=f969127d7b7ed0a8a63c2bbeae002588"

inherit cmake pkgconfig

PR = "r0"

SRC_URI = "\
    git://github.com/nlohmann/json.git;protocol=https;branch=master \
"

SRCREV = "9cca280a4d0ccf0c08f47a99aa71d1b0e52f8d03"

S = "${WORKDIR}/git"

ALLOW_EMPTY:${PN} = "1"

BBCLASSEXTEND = "native nativesdk"

