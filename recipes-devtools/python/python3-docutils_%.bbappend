inherit update-alternatives

ALTERNATIVE:${PN} = "\
    rst2html \
    rst2html4 \
    rst2html5 \
    rst2latex \
    rst2man \
    rst2odt \
    rst2odt_prepstyles \
    rst2pseudoxml \
    rst2s5 \
    rst2xetex \
    rst2xml \
    rstpep2html \
"

ALTERNATIVE_LINK_NAME[rst2html] = "${bindir}/rst2html.py"
ALTERNATIVE_LINK_NAME[rst2html4] = "${bindir}/rst2html4.py"
ALTERNATIVE_LINK_NAME[rst2html5] = "${bindir}/rst2html5.py"
ALTERNATIVE_LINK_NAME[rst2latex] = "${bindir}/rst2latex.py"
ALTERNATIVE_LINK_NAME[rst2man] = "${bindir}/rst2man.py"
ALTERNATIVE_LINK_NAME[rst2odt] = "${bindir}/rst2odt.py"
ALTERNATIVE_LINK_NAME[rst2odt_prepstyles] = "${bindir}/rst2odt_prepstyles.py"
ALTERNATIVE_LINK_NAME[rst2pseudoxml] = "${bindir}/rst2pseudoxml.py"
ALTERNATIVE_LINK_NAME[rst2s5] = "${bindir}/rst2s5.py"
ALTERNATIVE_LINK_NAME[rst2xetex] = "${bindir}/rst2xetex.py"
ALTERNATIVE_LINK_NAME[rst2xml] = "${bindir}/rst2xml.py"
ALTERNATIVE_LINK_NAME[rstpep2html] = "${bindir}/rstpep2html.py"

ALTERNATIVE_PRIORITY = "30"
