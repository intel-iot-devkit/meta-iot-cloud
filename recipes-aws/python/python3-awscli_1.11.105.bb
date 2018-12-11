inherit setuptools3 update-alternatives
require python-awscli.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-asyncio \
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-threading \
"

ALTERNATIVE_${PN} = "aws"
ALTERNATIVE_LINK_NAME[aws] = "${bindir}/aws"
ALTERNATIVE_PRIORITY = "30"
