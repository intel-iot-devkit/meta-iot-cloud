inherit setuptools update-alternatives
require python-awscli.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-argparse \
    ${PYTHON_PN}-subprocess \
"

ALTERNATIVE_${PN} = "\
    aws \
    aws_completer \
"

ALTERNATIVE_LINK_NAME[aws] = "${bindir}/aws"
ALTERNATIVE_LINK_NAME[aws_completer] = "${bindir}/aws_completer"

ALTERNATIVE_PRIORITY = "20"
