inherit setuptools
require python-azure-mgmt-dns.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-enum34 \
"