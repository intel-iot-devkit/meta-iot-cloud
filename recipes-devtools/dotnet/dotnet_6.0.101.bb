DESCRIPTION = ".NET Core Runtime, SDK & CLI tools"
HOMEPAGE = "https://www.microsoft.com/net/core"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=9fc642ff452b28d62ab19b7eea50dfb9"

COMPATIBLE_HOST ?= "(x86_64|aarch64|arm).*-linux"

DEPENDS = "zlib"

RDEPENDS:${PN} = "\
    icu \
    libgssapi-krb5 \
    lttng-ust \
    zlib \
"

RDEPENDS:${PN}:remove:class-native = "libgssapi-krb5 lttng-ust"

PR = "r0"

SRC_ARCH:aarch64 = "arm64"
SRC_FETCH_ID:aarch64 = "d43345e2-f0d7-4866-b56e-419071f30ebe/68debcece0276e9b25a65ec5798cf07b"
SRC_SHA512SUM:aarch64 = "04cd89279f412ae6b11170d1724c6ac42bb5d4fae8352020a1f28511086dd6d6af2106dd48ebe3b39d312a21ee8925115de51979687a9161819a3a29e270a954"

SRC_ARCH:arm = "arm"
SRC_FETCH_ID:arm = "72888385-910d-4ef3-bae2-c08c28e42af0/59be90572fdcc10766f1baf5ac39529a"
SRC_SHA512SUM:arm = "f9e212dc4cccbe665d9aac23da6bdddce4957ae4e4d407cf3f1d6da7e79784ebd408c3a59b3ecc6ceaa930b37cf01a4a91c6b38517970d49227e96e50658cc46"

SRC_ARCH:x86-64 = "x64"
SRC_FETCH_ID:x86-64 = "ede8a287-3d61-4988-a356-32ff9129079e/bdb47b6b510ed0c4f0b132f7f4ad9d5a"
SRC_SHA512SUM:x86-64 = "ca21345400bcaceadad6327345f5364e858059cfcbc1759f05d7df7701fec26f1ead297b6928afa01e46db6f84e50770c673146a10b9ff71e4c7f7bc76fbf709"

SRC_URI[vardeps] += "SRC_FETCH_ID SRC_ARCH"
SRC_URI[sha512sum] = "${SRC_SHA512SUM}"

SRC_URI = "https://download.visualstudio.microsoft.com/download/pr/${SRC_FETCH_ID}/dotnet-sdk-${PV}-linux-${SRC_ARCH}.tar.gz;subdir=dotnet-${PV}"

do_configure[noexec] = "1"
do_compile[noexec] = "1"

DOTNET_RUNTIME = "6.0.1"
MANIFEST_VERSION = "6.0.100" 
do_install[vardeps] += "RUNTIME"

do_install() {
    install -d ${D}${bindir}
    ln -rs ${D}${datadir}/dotnet/dotnet ${D}${bindir}/dotnet

    install -d ${D}${datadir}/dotnet
    cp -r --no-preserve=ownership  ${S}/templates ${D}${datadir}/dotnet
    install -m 0755 ${S}/dotnet ${D}${datadir}/dotnet
    install -m 0644 ${S}/LICENSE.txt ${D}${datadir}/dotnet
    install -m 0644 ${S}/ThirdPartyNotices.txt ${D}${datadir}/dotnet

    install -d ${D}${datadir}/dotnet/host/fxr
    cp -r --no-preserve=ownership ${S}/host/fxr/${DOTNET_RUNTIME} ${D}${datadir}/dotnet/host/fxr

    install -d ${D}${datadir}/dotnet/sdk
    cp -r --no-preserve=ownership ${S}/sdk/${PV} ${D}${datadir}/dotnet/sdk

    install -d ${D}${datadir}/dotnet/sdk-manifests
    cp -r --no-preserve=ownership ${S}/sdk-manifests/${MANIFEST_VERSION} ${D}${datadir}/dotnet/sdk-manifests

    install -d ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App
    cp -r --no-preserve=ownership ${S}/shared/Microsoft.NETCore.App/${DOTNET_RUNTIME} ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App

    install -d ${D}${datadir}/dotnet/shared/Microsoft.AspNetCore.App
    cp -r --no-preserve=ownership ${S}/shared/Microsoft.AspNetCore.App/${DOTNET_RUNTIME} ${D}${datadir}/dotnet/shared/Microsoft.AspNetCore.App
}

FILES:${PN} += "\
    ${datadir}/dotnet/dotnet \
    ${datadir}/dotnet/*.txt \
    ${datadir}/dotnet/host \
    ${datadir}/dotnet/shared \
"

FILES:${PN}-dev = "\
    ${datadir}/dotnet/sdk \
    ${datadir}/dotnet/templates \
"

FILES:${PN}-dbg = "\
    ${datadir}/dotnet/.debug \
"

RRECOMMENDS:dotnet-dev[nodeprrecs] = "1"

INSANE_SKIP:${PN} = "already-stripped libdir staticdev textrel"

BBCLASSEXTEND = "native"

