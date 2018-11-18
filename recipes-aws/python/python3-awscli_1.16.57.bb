inherit setuptools3
require python-awscli.inc

RDEPENDS_${PN} += "\
	groff \
	less \
	${PYTHON_PN}-botocore \
	${PYTHON_PN}-colorama \
	${PYTHON_PN}-docutils \
	${PYTHON_PN}-rsa \
	${PYTHON_PN}-s3transfer \
	${PYTHON_PN}-pyyaml \
	${PYTHON_PN}-difflib \
	${PYTHON_PN}-ctypes \
	${PYTHON_PN}-misc \
	${PYTHON_PN}-unixadmin \
	${PYTHON_PN}-logging \
	${PYTHON_PN}-threading \
	${PYTHON_PN}-asyncio \
"

do_install_append() {
	sed -i -e '1s|^#!.*|#!/usr/bin/env python3|' ${D}${bindir}/aws
}
