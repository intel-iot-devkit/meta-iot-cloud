DESCRIPTION = "A utility belt for advanced users of python-requests."
HOMEPAGE = "https://toolbelt.readthedocs.org"
AUTHOR = "Ian Cordasco, Cory Benfield"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=71760e0f1dda8cff91b0bc9246caf571"

SRC_URI = "git://github.com/sigmavirus24/requests-toolbelt.git"
SRCREV = "4b0406e675326f2485e1e5bbe4e03fe69aabb707"

RDEPENDS_${PN} += " \
	${PYTHON_PN}-requests \
"

PR = "r0"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
