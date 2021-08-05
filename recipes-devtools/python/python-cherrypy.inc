DESCRIPTION = "Object-Oriented HTTP framework"
HOMEPAGE = "https://www.cherrypy.org/"
AUTHOR = "CherryPy Team"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE.md;md5=beeffd9dfcc746ed5a91921f1acc2746"

PYPI_PACKAGE = "CherryPy"

DEPENDS += "\
    ${PYTHON_PN}-setuptools-scm-native \
"

RDEPENDS:${PN} += " \
    ${PYTHON_PN}-compression \
    ${PYTHON_PN}-crypt \
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-email \
    ${PYTHON_PN}-fcntl \
    ${PYTHON_PN}-html \
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-netclient \
    ${PYTHON_PN}-netserver \
    ${PYTHON_PN}-profile \
    ${PYTHON_PN}-pydoc \
    ${PYTHON_PN}-xml \
    ${PYTHON_PN}-unixadmin \
"

RDEPENDS:${PN} += " \
    ${PYTHON_PN}-cheroot \
    ${PYTHON_PN}-contextlib2 \
    ${PYTHON_PN}-memcached \
    ${PYTHON_PN}-portend \
    ${PYTHON_PN}-pyopenssl \
    ${PYTHON_PN}-routes \
    ${PYTHON_PN}-simplejson \
    ${PYTHON_PN}-six \
    ${PYTHON_PN}-zc-lockfile \
"

PR = "r0"

SRC_URI[md5sum] = "67a01707c3c432403b663201d031a288"
SRC_URI[sha256sum] = "c3e4d76232ade4c47666b9008f92556465df517b8dca833ece3bed027028ae7d"
