SUMMARY = "setuptools_scm plugin for git archives"
HOMEPAGE = "https://github.com/Changaco/setuptools_scm_git_archive/"
AUTHOR = "Changaco"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=838c366f69b72c5df05c96dff79b35f2"

PYPI_PACKAGE = "setuptools_scm_git_archive"

DEPENDS += "\
    ${PYTHON_PN}-setuptools-scm-native \
"

RDEPENDS:${PN} += "\
    ${PYTHON_PN}-setuptools-scm \
"

PR = "r0"

SRC_URI += "file://Fix-wheel-build-issue.patch"

SRC_URI[md5sum] = "cb4ca99e97edea548117fe0d80cbd089"
SRC_URI[sha256sum] = "52425f905518247c685fc64c5fdba6e1e74443c8562e141c8de56059be0e31da"

BBCLASSEXTEND = "native"
