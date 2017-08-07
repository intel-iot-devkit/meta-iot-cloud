DESCRIPTION = "Google Assistant Library Python wrapper"
HOMEPAGE = "https://developers.google.com/assistant/sdk"
AUTHOR = "Google Assistant SDK Team"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://${SRC_NAME}-${PV}.dist-info/LICENSE.txt;md5=86d3f3a95c324c9479bd8986968f4327"

COMPATIBLE_MACHINE ?= "intel-corei7-64|intel-baytrail-64|qemux86-64"

RDEPENDS_${PN} += " \
	libasound \
	${PYTHON_PN}-requests \
	${PYTHON_PN}-google-auth \
	${PYTHON_PN}-enum34 \
	${PYTHON_PN}-argparse \
"

PR = "r0"

SRC_NAME = "google_assistant_library"

SRC_URI = "\
	https://pypi.python.org/packages/8c/22/1ff4c7e9be8491029b2cff8e7cf2db54d213cbb100e557acd4e762ce93a2/${SRC_NAME}-${PV}-py2.py3-none-manylinux1_x86_64.whl;downloadfilename=${SRC_NAME}-${PV}.zip \
	file://google-assistant \
"
SRC_URI[md5sum] = "a0118e28aa13b1ccbc0d570994b67d6d"
SRC_URI[sha256sum] = "5e4c5a46145b92ed5ac2b801821dc37fe6fc5a5a679763b245f14d33f49f59da"

S = "${WORKDIR}"

do_configure[noexec] = "1"
do_compile[noexec] = "1"

do_install() {
	install -d ${D}${bindir}
	install -d ${D}${PYTHON_SITEPACKAGES_DIR}

	install -m 0755 ${S}/google-assistant ${D}/${bindir}

	cp -R ${S}/google ${D}${PYTHON_SITEPACKAGES_DIR}
	cp -R ${S}/${SRC_NAME}-${PV}.dist-info ${D}${PYTHON_SITEPACKAGES_DIR}
	cp ${S}/*.pth ${D}${PYTHON_SITEPACKAGES_DIR}
}

FILES_${PN} = "\
	${bindir} \
	${PYTHON_SITEPACKAGES_DIR} \
"

INSANE_SKIP_${PN} = "already-stripped"
