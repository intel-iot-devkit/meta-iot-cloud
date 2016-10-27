DESCRIPTION = "Python 3.4 Enum backported to 3.3, 3.2, 3.1, 2.7, 2.6, 2.5, and 2.4"
HOMEPAGE = "https://bitbucket.org/stoneleaf/enum34"
AUTHOR = "Ethan Furman"
LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://enum/LICENSE;md5=0a97a53a514564c20efd7b2e8976c87e"

inherit setuptools

SRC_NAME = "enum34"

SRC_URI = "https://pypi.python.org/packages/e8/26/a6101edcf724453845c850281b96b89a10dac6bd98edebc82634fccce6a5/${SRC_NAME}-${PV}.zip"
SRC_URI[md5sum] = "61ad7871532d4ce2d77fac2579237a9e"
SRC_URI[sha256sum] = "2d81cbbe0e73112bdfe6ef8576f2238f2ba27dd0d55752a776c41d38b7da2850"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
