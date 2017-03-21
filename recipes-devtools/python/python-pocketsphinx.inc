SUMMARY = "Python interface to CMU Sphinxbase and Pocketsphinx libraries"
HOMEPAGE = "https://github.com/bambocher/pocketsphinx-python"
AUTHOR = "Dmitry Prazdnichnov"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE;beginline=17;endline=23;md5=bf6c1f97c313f8c55546e9b28bbf0079"

DEPENDS += "\
	swig-native \
	pulseaudio \
"

PR = "r0"

SRC_URI = "gitsm://github.com/bambocher/pocketsphinx-python.git"
SRCREV = "8d666f03e2124e107bafc8ee43bceefd0058e5f0"

S = "${WORKDIR}/git"
