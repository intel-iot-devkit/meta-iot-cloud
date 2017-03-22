DESCRIPTION = "An ISO 8601 date/time/duration parser and formatter"
HOMEPAGE = "https://github.com/gweis/isodate"
AUTHOR = "Gerhard Weis"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://MANIFEST.in;md5=42f0fca119f5518450ec0070aec9a866"

SRC_URI = "git://github.com/gweis/isodate.git"
SRCREV = "b99c0bd318991a8a8a9dc0c5273800b9801428f6"

PR = "r0"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
