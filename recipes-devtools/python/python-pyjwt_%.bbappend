inherit update-alternatives

ALTERNATIVE_${PN} = "pyjwt"
ALTERNATIVE_LINK_NAME[pyjwt] = "${bindir}/pyjwt"
ALTERNATIVE_PRIORITY = "20"
