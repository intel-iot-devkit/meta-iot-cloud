DESCRIPTION = ".NET Core Runtime, SDK & CLI tools"
HOMEPAGE = "https://www.microsoft.com/net/core"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=9fc642ff452b28d62ab19b7eea50dfb9"

COMPATIBLE_HOST ?= "(x86_64|aarch64|arm).*-linux"

DEPENDS = "zlib"

RDEPENDS_${PN} = "\
    icu \
    libgssapi-krb5 \
    lttng-ust \
    zlib \
"

RDEPENDS_${PN}_remove_class-native = "libgssapi-krb5 lttng-ust"

PR = "r0"

SRC_ARCH_aarch64 = "arm64"
SRC_FETCH_ID_aarch64 = "2add7523-39ec-413a-b8a7-24361cc4e599/30489ebd7ebcc723da48a64669860fd0"
SRC_SHA512SUM_aarch64 = "b26beafd7649fd9081a914909aca6302e8629f24d97ac5d7ac4c7aace007aff93e920510f3fa5a871c71ad42f2e38241115339ccf01d2399b2c9000b53607a86"

SRC_ARCH_arm = "arm"
SRC_FETCH_ID_arm = "567a64a8-810b-4c3f-85e3-bc9f9e06311b/02664afe4f3992a4d558ed066d906745"
SRC_SHA512SUM_arm = "2b03ae553b59ad39aa22b5abb5b208318b15284889a86abdc3096e382853c28b0438e2922037f9bc974c85991320175ba48d7a6963bb112651d7027692bb5cde"

SRC_ARCH_x86-64 = "x64"
SRC_FETCH_ID_x86-64 = "a0487784-534a-4912-a4dd-017382083865/be16057043a8f7b6f08c902dc48dd677"
SRC_SHA512SUM_x86-64 = "398d88099d765b8f5b920a3a2607c2d2d8a946786c1a3e51e73af1e663f0ee770b2b624a630b1bec1ceed43628ea8bc97963ba6c870d42bec064bde1cd1c9edb"

SRC_URI[vardeps] += "SRC_FETCH_ID SRC_ARCH"
SRC_URI[sha512sum] = "${SRC_SHA512SUM}"

SRC_URI = "https://download.visualstudio.microsoft.com/download/pr/${SRC_FETCH_ID}/dotnet-sdk-${PV}-linux-${SRC_ARCH}.tar.gz;subdir=dotnet-${PV}"

do_configure[noexec] = "1"
do_compile[noexec] = "1"

RUNTIME = "5.0.1"
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
    cp -r --no-preserve=ownership ${S}/host/fxr/${RUNTIME} ${D}${datadir}/dotnet/host/fxr

    install -d ${D}${datadir}/dotnet/sdk
    cp -r --no-preserve=ownership ${S}/sdk/${PV} ${D}${datadir}/dotnet/sdk

    install -d ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App
    cp -r --no-preserve=ownership ${S}/shared/Microsoft.NETCore.App/${RUNTIME} ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App

    install -d ${D}${datadir}/dotnet/shared/Microsoft.AspNetCore.App
    cp -r --no-preserve=ownership ${S}/shared/Microsoft.AspNetCore.App/${RUNTIME} ${D}${datadir}/dotnet/shared/Microsoft.AspNetCore.App
}

FILES_${PN} += "\
    ${datadir}/dotnet/dotnet \
    ${datadir}/dotnet/*.txt \
    ${datadir}/dotnet/host \
    ${datadir}/dotnet/shared \
"

FILES_${PN}-dev = "\
    ${datadir}/dotnet/sdk \
    ${datadir}/dotnet/templates \
"

FILES_${PN}-dbg = "\
    ${datadir}/dotnet/.debug \
"

RRECOMMENDS_dotnet-dev[nodeprrecs] = "1"

INSANE_SKIP_${PN} = "already-stripped libdir staticdev textrel"

BBCLASSEXTEND = "native"
