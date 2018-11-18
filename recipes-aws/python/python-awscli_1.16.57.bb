inherit setuptools
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
	${PYTHON_PN}-subprocess \
	${PYTHON_PN}-ctypes \
	${PYTHON_PN}-misc \
	${PYTHON_PN}-argparse \
	${PYTHON_PN}-unixadmin \
"
