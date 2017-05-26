DESCRIPTION = "Python wrapper around some of the VSTS APIs"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Microsoft/vsts-cd-manager"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=27e94c0280987ab296b0b8dd02ab9fe5"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrest \
"

PR = "r0"

SRC_URI = "git://github.com/Microsoft/vsts-cd-manager.git"
SRCREV = "282863f4526bb60c0a883436d3df31b5e04f7cfa"

S = "${WORKDIR}/git"
