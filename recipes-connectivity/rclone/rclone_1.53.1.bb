SUMMARY = "Rclone - rsync for cloud storage. "
DESCRIPTION = "Sync files to and from many cloud storage providers like AWS S3, Google Cloud, Azure and many more"
AUTHOR = "Nishant Poorswani <nishantpoorswani@gmail.com>"
HOMEPAGE = "https://rclone.org/"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://src/github.com/rclone/rclone/COPYING;md5=bed161b82a1ecab65ff7ba3c3b960439"

RDEPENDS:${PN}-dev = "\
    bash \
    python3-core \
"

inherit go-mod

GO_IMPORT = "github.com/rclone/rclone"

SRC_URI = "git://${GO_IMPORT};branch=v1.53-stable;tag=v${PV}"

PR = "r0"

do_install:prepend(){
    rm -f ${B}/${GO_BUILD_BINDIR}/bin
    rm -f ${B}/${GO_BUILD_BINDIR}/build_csv
    rm -f ${B}/${GO_BUILD_BINDIR}/gen
    rm -f ${B}/${GO_BUILD_BINDIR}/test_all
    rm -f ${B}/${GO_BUILD_BINDIR}/test_vfs
}

INSANE_SKIP:${PN}-staticdev += "arch ldflags"
