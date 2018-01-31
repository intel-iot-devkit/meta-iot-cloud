DESCRIPTION = "Node.js is a platform built on Chrome's JavaScript runtime for easily building fast, scalable network applications."
HOMEPAGE = "http://nodejs.org"
LICENSE = "MIT"
SECTION = "devel"
SUMMARY = "Node.js is a platform built on Chrome's JavaScript runtime for easily building fast, scalable network applications."

DEPENDS = "openssl"
DEPENDS_class-native += " openssl-native"

RCONFLICTS_${PN} = "node"

PR = "r1.0"
PV = "v4.4.0"


FILESEXTRAPATHS_prepend := "${THISDIR}/files:"
SRC_URI = "file://node-v4.4.0.tar.gz \
           file://fix_ar.patch"

LIC_FILES_CHKSUM = "file://LICENSE;md5=b70c304f43f326ddbc3474ba2b685522"


S = "${WORKDIR}/node-${PV}"

# v8 errors out if you have set CCACHE
CCACHE = ""

def map_dest_cpu(target_arch, d):
    import re
    if   re.match('i.86$', target_arch): return 'ia32'
    elif re.match('x86_64$', target_arch): return 'x64'
    return target_arch

def v8_target_arch(target_arch, d):
    import re
    if   re.match('i.86$', target_arch): return 'x87'
    elif re.match('x86_64$', target_arch): return 'x64'
    return target_arch

GYP_DEFINES_append_mipsel = " mips_arch_variant='r1' "

do_configure () {
  export LD="${CXX}"
  alias g++="${CXX}"
  GYP_DEFINES="${GYP_DEFINES}" export GYP_DEFINES
  ./configure --prefix=${prefix} --without-snapshot --dest-cpu=${@map_dest_cpu(d.getVar('TARGET_ARCH', True), d)} --dest-os=linux ${ARCHFLAGS} ${EXTRA_OECONF}
  unalias g++
  cd ${S}; sed -i '/want_separate_host_toolset/ i \                \ \x27v8_target_arch\x27:\x27${@v8_target_arch(d.getVar('TARGET_ARCH', True), d)}\x27,' config.gypi
}


do_compile () {
  export LD="${CXX}"
  alias g++="${CXX}"
  make BUILDTYPE=Release
  unalias g++
}

do_install () {
  oe_runmake DESTDIR=${D} install
}

PACKAGES =+ "${PN}-npm"
FILES_${PN}-npm = "/usr/lib/node_modules ${bindir}/npm"
RDEPENDS_${PN}-npm = "bash python-compiler python-shell python-datetime python-subprocess python-multiprocessing python-crypt python-textutils python-netclient python-misc"

PACKAGES =+ "${PN}-dtrace"
FILES_${PN}-dtrace = "${libdir}/dtrace"

PACKAGES =+ "${PN}-systemtap"
FILES_${PN}-systemtap = "${datadir}/systemtap"

BBCLASSEXTEND = "native"
