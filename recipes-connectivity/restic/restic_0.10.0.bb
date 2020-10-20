SUMMARY = "restic is a backup program that is fast, efficient and secure."
DESCRIPTION = "Restic can backup and sync data to AWS S3, Google Cloud, Azure, SFTP servers and many more"
AUTHOR = "Nishant Poorswani <nishantpoorswani@gmail.com>"
LICENSE = "BSD-2-Clause"
LIC_FILES_CHKSUM = "file://src/github.com/restic/restic/LICENSE;md5=d267ffee32f3f73928409ee59c2c9667"

inherit go-mod

GO_IMPORT = "github.com/restic/restic"

SRC_URI = "git://${GO_IMPORT};tag=v${PV}"

PR = "r0"

do_install_prepend(){
    rm -f ${B}/${GO_BUILD_BINDIR}/build-release-binaries
    rm -f ${B}/${GO_BUILD_BINDIR}/prepare-release
}

INSANE_SKIP_${PN}-staticdev += "arch ldflags"
