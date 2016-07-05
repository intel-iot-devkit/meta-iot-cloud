DESCRIPTION = "Python HTTP for Humans."
HOMEPAGE = "http://python-requests.org"
SECTION = "devel/python"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=d9bb3515869c0f426cb8441c899ae7f5"

inherit setuptools

PR = "r0"

SRC_NAME = "requests"

SRC_URI = "git://github.com/kennethreitz/${SRC_NAME}.git"
SRCREV = "efb4af01271c8c0ddf49457c7096a5bc91edbdad"

S = "${WORKDIR}/git"
