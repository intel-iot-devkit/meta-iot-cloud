DESCRIPTION = "This project extends the Application Insights API surface to support Python."
AUTHOR = "Microsoft"
HOMEPAGE = "https://github.com/Microsoft/ApplicationInsights-Python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=754d7ceca11772e3aecda377fa0ead2b"

SRC_NAME = "ApplicationInsights-Python"

SRC_URI = "git://github.com/Microsoft/${SRC_NAME}.git"
SRCREV = "cea9bb5a08a1b82412d2b9a48a95886072752d94"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
