DESCRIPTION = "Python 3.3+'s ipaddress for Python 2.6, 2.7, 3.2."
HOMEPAGE = "https://github.com/phihag/ipaddress"
AUTHOR = "Philipp Hagemeister"
LICENSE = "Python-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=7f538584cc3407bf76042def7168548a"

inherit setuptools

SRC_NAME = "ipaddress"

SRC_URI = "git://github.com/phihag/${SRC_NAME}.git"
SRCREV = "a3b1237ba86026ebf07c44ef95c6678028456b5a"

S = "${WORKDIR}/git"
