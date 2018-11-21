inherit setuptools3
require python-awscli.inc

do_install_append() {
	sed -i -e '1s|^#!.*|#!/usr/bin/env python3|' ${D}${bindir}/aws
}
