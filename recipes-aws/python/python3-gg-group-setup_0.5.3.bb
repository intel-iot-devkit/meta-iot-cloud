inherit setuptools3 update-alternatives
require python-gg-group-setup.inc

ALTERNATIVE_${PN} = "\
    gg_group_setup \
"

ALTERNATIVE_LINK_NAME[gg_group_setup] = "${bindir}/gg_group_setup"

ALTERNATIVE_PRIORITY = "30"
