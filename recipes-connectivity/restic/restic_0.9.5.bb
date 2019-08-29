SUMMARY = "restic is a backup program that is fast, efficient and secure."
DESCRIPTION = "Restic can backup and sync data to AWS S3, Google Cloud, Azure, SFTP servers and many more"
AUTHOR = "Nishant Poorswani <nishantpoorswani@gmail.com>"

GO_IMPORT = "github.com/restic/restic"
inherit go

LICENSE = "BSD-2-Clause"
LIC_FILES_CHKSUM = "file://src/github.com/restic/restic/LICENSE;md5=d267ffee32f3f73928409ee59c2c9667 \
"

SRC_URI = "git://${GO_IMPORT}"
SRCREV = "303210aa082c1c40d1d3950f9cf3d1ef4efa4b0b"

do_install_prepend(){
rm -f ${B}/${GO_BUILD_BINDIR}/build-release-binaries
rm -f ${B}/${GO_BUILD_BINDIR}/prepare-release
}
