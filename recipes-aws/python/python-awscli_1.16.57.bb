inherit setuptools update-alternatives
require python-awscli.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-argparse \
    ${PYTHON_PN}-subprocess \
"

ALTERNATIVE_${PN} = "aws"
ALTERNATIVE_LINK_NAME[aws] = "${bindir}/aws"
ALTERNATIVE_PRIORITY = "20"
