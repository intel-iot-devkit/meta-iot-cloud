inherit update-alternatives

ALTERNATIVE_${PN} = "ndg_httpclient"
ALTERNATIVE_LINK_NAME[ndg_httpclient] = "${bindir}/ndg_httpclient"
ALTERNATIVE_PRIORITY = "20"
