SUMMARY = "Backport of functools.lru_cache from Python 3.3 as published at ActiveState."
AUTHOR = "Jason R. Coombs"
HOMEPAGE = "https://github.com/jaraco/backports.functools_lru_cache"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=a33f38bbf47d48c70fe0d40e5f77498e"

PYPI_PACKAGE = "backports.functools_lru_cache"

DEPENDS += "\
    ${PYTHON_PN}-setuptools-scm-native \
"

PR = "r0"

SRC_URI[md5sum] = "20f53f54cd3f04b3346ce75a54959754"
SRC_URI[sha256sum] = "9d98697f088eb1b0fa451391f91afb5e3ebde16bbdb272819fd091151fda4f1a"
