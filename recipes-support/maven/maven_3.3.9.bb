DESCRIPTION = "Apache Maven is a software project management and comprehension tool. Based on the concept of a Project Object Model (POM), Maven can manage a project's build, reporting and documentation from a central piece of information."
HOMEPAGE = "http://maven.apache.org"
SECTION = "devel"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://${S}/LICENSE;md5=86870d6aee2ee3520c12fc36ebe676cd"

SRC_URI = "\
	http://mirror.catn.com/pub/apache/maven/maven-3/${PV}/binaries/apache-maven-${PV}-bin.tar.gz \
	file://settings.xml \
"

SRC_URI[md5sum] = "516923b3955b6035ba6b0a5b031fbd8b"
SRC_URI[sha256sum] = "6e3e9c949ab4695a204f74038717aa7b2689b1be94875899ac1b3fe42800ff82"

PR = "r1"

PACKAGES = "${PN}"

S = "${WORKDIR}/apache-maven-${PV}"

do_configure() {
    # Install custom settings
    cp ${WORKDIR}/settings.xml ${S}/conf/settings.xml
}

python do_install () {
    bb.build.exec_func("shell_do_install", d)
    oe.path.make_relative_symlink(d.expand("${D}${bindir}/mvn"))
}

shell_do_install() {
	install -d ${D}${libdir}/${PN}/bin
	install -m 0755 ${S}/bin/mvn ${D}${libdir}/${PN}/bin/
	install -m 0755 ${S}/bin/mvnDebug ${D}${libdir}/${PN}/bin/
	install -m 0755 ${S}/bin/mvnyjp ${D}${libdir}/${PN}/bin/
	install -m 0644 ${S}/bin/m2.conf ${D}${libdir}/${PN}/bin/

	install -d ${D}${libdir}/${PN}/boot
	install -m 0644 ${S}/boot/* ${D}${libdir}/${PN}/boot/

	install -d ${D}${libdir}/${PN}/conf
	install -d ${D}${libdir}/${PN}/conf/logging
	install -m 0644 ${S}/conf/*.xml ${D}${libdir}/${PN}/conf/
	install -m 0644 ${S}/conf/logging/* ${D}${libdir}/${PN}/conf/logging/

	install -d ${D}${libdir}/${PN}/lib
	install -m 0644 ${S}/lib/*.jar ${D}${libdir}/${PN}/lib/
	install -m 0644 ${S}/lib/*.license ${D}${libdir}/${PN}/lib/

	install -d ${D}${bindir}
	ln -sf ${D}${libdir}/${PN}/bin/mvn ${D}${bindir}/mvn
}

FILES_${PN} = "\
	${libdir} \
	${bindir} \
"

BBCLASSEXTEND = "native nativesdk"
