DESCRIPTION = "A library to support the Internationalised Domain Names in Applications (IDNA) protocol as specified in RFC 5891"
HOMEPAGE = "https://github.com/kjd/idna"
AUTHOR = "Kim Davies"
LICENSE = "BSD-3-Clause | Python-2.0 | Unicode"
LIC_FILES_CHKSUM = "file://LICENSE.rst;md5=134bdad79491c37bdae32811572b4bc6"

SRC_NAME = "idna"

SRC_URI = "git://github.com/kjd/${SRC_NAME}.git"
SRCREV = "cb8ae9acf100c9faba02737ac82b31a0152d19e8"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
