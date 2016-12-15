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

PR = "r0"

PACKAGES = "${PN}"

S = "${WORKDIR}/apache-maven-${PV}"

do_configure() {
    # Install custom settings
    cp ${WORKDIR}/settings.xml ${S}/conf/settings.xml
}

do_install() {
    install -d -m 0755 ${D}${libdir}/${PN}
    cp -ar * ${D}${libdir}/${PN}

    install -d -m 0755 ${D}${bindir}
    ln -sf ${libdir}/${PN}/bin/mvn ${D}${bindir}/mvn 
}

FILES_${PN} = "\
	${libdir} \
	${bindir} \
"

BBCLASSEXTEND = "native nativesdk"
