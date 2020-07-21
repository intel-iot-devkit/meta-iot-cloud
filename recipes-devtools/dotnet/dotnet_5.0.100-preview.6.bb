DESCRIPTION = ".NET Core Runtime, SDK & CLI tools"
HOMEPAGE = "https://www.microsoft.com/net/core"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=9fc642ff452b28d62ab19b7eea50dfb9"

COMPATIBLE_HOST ?= "(x86_64|aarch64|arm).*-linux"

DEPENDS = "\
    zlib \
"

RDEPENDS_${PN}_class-target += "\
    icu \
    libgssapi-krb5 \
    lttng-ust \
    zlib \
"

RDEPENDS_${PN}_class-native += "\
    icu-native \
    krb5-native \
    zlib-native \
"

HOST_FXR = "5.0.0-preview.6.20305.6"
RUNTIME = "5.0.0-preview.6.20305.6"
ASP_RUNTIME = "5.0.0-preview.6.20312.15"
SDK = "5.0.100-preview.6.20318.15"

PR = "r0"

python __anonymous () {
    import re
    
    target_arch = d.getVar('TARGET_ARCH')
    
    if re.match('x86_64$', target_arch):
        d.setVar('SRC_FETCH_ID', 'ec4bba83-4586-4705-a6ae-c648861ca284/d9470c2f68161e3c2b8a0785fe7b3329')
        d.setVarFlag('SRC_URI', 'sha512sum', 'ae68221770e8f199880f00a29d72c624aaedc0c3ca61a7b543a6555acf27eca4c0c24fbd4eddc1322d7dcb4f342325b1d1521c590556bd95c3c2ec653b914dbb')
        d.setVar('DOTNET_ARCH', 'x64')
    elif re.match('aarch64$', target_arch):
        d.setVar('SRC_FETCH_ID', '164ecfcc-df44-476f-a161-340201aa6fa8/7200eb764dc9ff546d384e3188f98a53')
        d.setVarFlag('SRC_URI', 'sha512sum', '2a1039c4a94abd33949176407edee84dbd54053b56c7e2d8b69e7cf28e16f89013036cf662403ea8f2ea593b9b1b702e464762d9670da12507d1c1e06a58c04f')
        d.setVar('DOTNET_ARCH', 'arm64')
    elif re.match('arm$', target_arch):
        d.setVar('SRC_FETCH_ID', 'fc54f62e-c7bd-43a3-a27b-4afb08bc4d6f/b01ccacf3d94efc0bbe26f64f7fde9b7')
        d.setVarFlag('SRC_URI', 'sha512sum', '1dd5c4f90d43983f1b6ccfa7631fd70afe99b26c1111d191dccb860bcfa232052c3589147f730b583b3f498bcd1116a131fae462267b68a00c10d7e7d832e65f')
        d.setVar('DOTNET_ARCH', 'arm')
}

SRC_URI = "https://download.visualstudio.microsoft.com/download/pr/${SRC_FETCH_ID}/${BPN}-sdk-${SDK}-linux-${DOTNET_ARCH}.tar.gz"

S = "${WORKDIR}"

do_configure[noexec] = "1"
do_compile[noexec] = "1"

python do_install () {
    bb.build.exec_func("shell_do_install", d)
    oe.path.make_relative_symlink(d.expand("${D}${bindir}/dotnet"))
}

shell_do_install() {
    install -d ${D}${bindir}
    install -d ${D}${datadir}/dotnet
    install -d ${D}${datadir}/dotnet/host/fxr
    install -d ${D}${datadir}/dotnet/sdk
    install -d ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App
    install -d ${D}${datadir}/dotnet/shared/Microsoft.AspNetCore.App

    install -m 0755 ${S}/dotnet ${D}${datadir}/dotnet
    install -m 0644 ${S}/LICENSE.txt ${D}${datadir}/dotnet
    install -m 0644 ${S}/ThirdPartyNotices.txt ${D}${datadir}/dotnet

    cp -r ${S}/sdk/${SDK} ${D}${datadir}/dotnet/sdk
    cp -r ${S}/host/fxr/${HOST_FXR} ${D}${datadir}/dotnet/host/fxr
    cp -r ${S}/shared/Microsoft.NETCore.App/${RUNTIME} ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App
    cp -r ${S}/shared/Microsoft.AspNetCore.App/${ASP_RUNTIME} ${D}${datadir}/dotnet/shared/Microsoft.AspNetCore.App
    cp -r ${S}/templates ${D}${datadir}/dotnet

    # Symlinks
    ln -s ${D}${datadir}/dotnet/dotnet ${D}${bindir}/dotnet
}

FILES_${PN} = "\
    ${bindir} \
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

INSANE_SKIP_${PN} = "already-stripped staticdev ldflags libdir textrel"
INSANE_SKIP_${PN}-dev = "libdir"
INSANE_SKIP_${PN}-dbg += "libdir"

BBCLASSEXTEND = "native"
