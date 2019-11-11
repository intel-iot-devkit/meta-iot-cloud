inherit setuptools3 update-alternatives
require python-awscli.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-asyncio \
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-threading \
"

do_install_append() {
    sed -i -e '1s|^#!.*|#!/usr/bin/env python3|' ${D}${bindir}/aws
}

ALTERNATIVE_${PN} = "\
    aws \
    aws_completer \
"

ALTERNATIVE_LINK_NAME[aws] = "${bindir}/aws"
ALTERNATIVE_LINK_NAME[aws_completer] = "${bindir}/aws_completer"

ALTERNATIVE_PRIORITY = "30"
