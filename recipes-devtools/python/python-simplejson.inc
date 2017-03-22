SUMMARY = "Simple, fast, extensible JSON encoder/decoder for Python"
HOMEPAGE = "http://github.com/simplejson/simplejson"
AUTHOR = "Bob Ippolito"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=c6338d7abd321c0b50a2a547e441c52e"

RPROVIDES_${PN} += "simplejson"

PR = "r1"

SRC_URI = "git://github.com/simplejson/simplejson.git"
SRCREV = "c52efea57d0f733d28eb991eeebb121c53b3a48a"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
