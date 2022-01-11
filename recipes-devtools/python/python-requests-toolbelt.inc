DESCRIPTION = "A utility belt for advanced users of python-requests."
HOMEPAGE = "https://toolbelt.readthedocs.org"
AUTHOR = "Ian Cordasco, Cory Benfield"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=71760e0f1dda8cff91b0bc9246caf571"

SRC_URI = "git://github.com/sigmavirus24/requests-toolbelt.git;protocol=https"
SRCREV = "94870f3f8e4e3507218a07f9d730c38abc42c219"

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-requests \
"

PR = "r0"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
