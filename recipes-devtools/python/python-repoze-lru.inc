DESCRIPTION = "A tiny LRU cache implementation and decorator"
HOMEPAGE = "http://www.repoze.org"
AUTHOR = "Agendaless Consulting"
SECTION = "devel/python"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=2c33cdbc6bc9ae6e5d64152fdb754292"

PR = "r0"

SRC_URI = "git://github.com/repoze/repoze.lru.git;protocol=https;branch=master"
SRCREV = "29c8281dee7fe8dae8c66c7c40ce7c058ec2ab0f"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
