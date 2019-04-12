inherit pypi setuptools update-alternatives
require python-argcomplete.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-argparse \
    ${PYTHON_PN}-codecs \
    ${PYTHON_PN}-contextlib \
    ${PYTHON_PN}-subprocess \
"

ALTERNATIVE_${PN} = "\
    activate-global-python-argcomplete \
    python-argcomplete-check-easy-install-script \
    register-python-argcomplete \
"

ALTERNATIVE_LINK_NAME[activate-global-python-argcomplete] = "${bindir}/activate-global-python-argcomplete"
ALTERNATIVE_LINK_NAME[python-argcomplete-check-easy-install-script] = "${bindir}/python-argcomplete-check-easy-install-script"
ALTERNATIVE_LINK_NAME[register-python-argcomplete] = "${bindir}/register-python-argcomplete"

ALTERNATIVE_PRIORITY = "20"
