inherit update-alternatives

ALTERNATIVE:${PN} = "pyjwt"
ALTERNATIVE_LINK_NAME[pyjwt] = "${bindir}/pyjwt"
ALTERNATIVE_PRIORITY = "30"
