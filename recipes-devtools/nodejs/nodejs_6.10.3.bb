require nodejs.inc

PROVIDES = "node"
RPROVIDES_${PN} = "node"

PR = "r0"

do_install () {
	oe_runmake install DESTDIR=${D}
}

do_install_append_class-native() {
	sed "1s^.*^#\!/usr/bin/env node^g" -i ${D}${exec_prefix}/lib/node_modules/npm/bin/npm-cli.js
}

do_install_append_class-nativesdk() {
	sed "1s^.*^#\!/usr/bin/env node^g" -i ${D}${exec_prefix}/lib/node_modules/npm/bin/npm-cli.js
	sed "1s^.*^#\!/usr/bin/env python^g" -i ${D}${exec_prefix}/lib/node_modules/npm/node_modules/node-gyp/gyp/samples/samples
}

do_install_append_class-target() {
	sed "1s^.*^#\!${bindir}/env node^g" -i ${D}${exec_prefix}/lib/node_modules/npm/bin/npm-cli.js
}

PACKAGES =+ "${PN}-npm"
RDEPENDS_${PN}-npm = "\
	bash \
	python-compiler \
	python-shell \
	python-datetime \
	python-subprocess \
	python-multiprocessing \
	python-crypt \
	python-textutils \
	python-netclient \
	python-misc \
"
FILES_${PN}-npm = "\
	${bindir}/npm \
	${exec_prefix}/lib/node_modules \
"

PACKAGES =+ "${PN}-systemtap"
FILES_${PN}-systemtap = "${datadir}/systemtap"
