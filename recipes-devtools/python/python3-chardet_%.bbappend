inherit update-alternatives

ALTERNATIVE_${PN} = "chardetect"
ALTERNATIVE_LINK_NAME[chardetect] = "${bindir}/chardetect"
ALTERNATIVE_PRIORITY = "30"
