SUMMARY = "A collection of ASN.1-based protocols modules."
AUTHOR = "Ilya Etingof"
HOMEPAGE = "https://github.com/etingof/pyasn1-modules"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=425e62320d430219736139b134db2fc4"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-pyasn1 \
"

PR = "r0"

SRC_NAME = "pyasn1-modules"

SRC_URI = "git://github.com/etingof/${SRC_NAME}.git"
SRCREV = "35eec0d4d678845dcc06aa343e561f2582e5fdc9"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
