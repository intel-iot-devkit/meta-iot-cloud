SUMMARY = "Rclone - rsync for cloud storage. "
DESCRIPTION = "Sync files to and from many cloud storage providers like AWS S3, Google Cloud, Azure and many more"
AUTHOR = "Nick Craig-Wood"
HOMEPAGE = "https://rclone.org/"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://src/COPYING;md5=bed161b82a1ecab65ff7ba3c3b960439"

RDEPENDS:${PN}-dev = "\
    bash \
    python3-core \
"

inherit go-mod

GO_IMPORT = "github.com/rclone/rclone"
GO_INSTALL = "${GO_IMPORT}"
GO_LINKSHARED = ""

SRC_URI = "git://${GO_IMPORT}.git;branch=master;protocol=https;destsuffix=src"

SRCREV = "93e8a976ef686a4bd8e3afaf2016734c81881507"

S = "${UNPACKDIR}"
