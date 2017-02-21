DESCRIPTION = "The Cython compiler for writing C extensions for the Python language."
AUTHOR = "Robert Bradshaw, Stefan Behnel, Dag Seljebotn, Greg Ewing, et al."
HOMEPAGE = "http://cython.org/"
SECTION = "devel/python"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=e23fadd6ceef8c618fc1c65191d846fa"

SRC_URI = "git://github.com/cython/cython.git"
SRCREV = "c9bcf1bed3acf367d6deb0c273cf22db0f18dab2"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
