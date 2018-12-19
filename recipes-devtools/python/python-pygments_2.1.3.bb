inherit setuptools update-alternatives
require python-pygments.inc

ALTERNATIVE_${PN} = "pygmentize"
ALTERNATIVE_LINK_NAME[pygmentize] = "${bindir}/pygmentize"
ALTERNATIVE_PRIORITY = "20"
