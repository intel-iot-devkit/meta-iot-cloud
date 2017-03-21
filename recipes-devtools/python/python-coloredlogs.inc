SUMMARY = "Colored terminal output for Python's logging module"
HOMEPAGE = "https://coloredlogs.readthedocs.io/"
AUTHOR = "Peter Odding"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=d4b9bfd363e871d2be165d0372c0169f"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-humanfriendly \
"

PR = "r0"

SRC_URI = "git://github.com/xolox/python-coloredlogs.git"
SRCREV = "84c98bc229d67be7d76fe582524b4ae82d4109bb"

do_compile_prepend() {
	# Fix install directory issue
	sed -ie "s/find_pth_directory(),/'',/g" setup.py	
}

do_install_append() {
	# Remove extraneous install files
	rm -rf ${D}${prefix}/share
}

S = "${WORKDIR}/git"
