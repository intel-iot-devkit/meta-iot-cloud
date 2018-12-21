DESCRIPTION = "Pure python memcached client"
HOMEPAGE = "http://www.tummy.com/Community/software/python-memcached/"
AUTHOR = "Sean Reifschneider"
SECTION = "devel/python"
LICENSE = "Python-2.0"
LIC_FILES_CHKSUM = "file://PSF.LICENSE;md5=7dd786e8594f1e787da94a946557b40e"

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-six \
"

PR = "r0"

SRC_URI = "git://github.com/linsomniac/python-memcached.git"
SRCREV = "b13d6fcb7164a0c25c1798fcd409bf775a9005b3"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
