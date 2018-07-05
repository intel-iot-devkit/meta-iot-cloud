inherit setuptools
require python-azure-mgmt-redis.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-enum34 \
"