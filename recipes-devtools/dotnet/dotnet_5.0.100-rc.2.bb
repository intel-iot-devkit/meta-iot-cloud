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

HOST_FXR = "5.0.0-rc.2.20475.5"
RUNTIME = "5.0.0-rc.2.20475.5"
ASP_RUNTIME = "5.0.0-rc.2.20475.17"
SDK = "5.0.100-rc.2.20479.15"

PR = "r0"

python __anonymous () {
    import re
    
    target_arch = d.getVar('TARGET_ARCH')
    
    if re.match('x86_64$', target_arch):
        d.setVar('SRC_FETCH_ID', '69cb8922-7bb0-4d3a-aa92-8cb885fdd0a6/2fd4da9e026f661caf8db9c1602e7b2f')
        d.setVarFlag('SRC_URI', 'sha512sum', 'e705043cdec53827695567eed021c76b100d77416f10cc18d4f5d02950f85bf9ccd7e2c22643f00a883e11b253fb8aa098e4dce008008a0796f913496f97e362')
        d.setVar('DOTNET_ARCH', 'x64')
    elif re.match('aarch64$', target_arch):
        d.setVar('SRC_FETCH_ID', 'b416bc12-1478-4241-bc31-6fe68f8b73b6/582f018a97172f4975973390cf3f58e7')
        d.setVarFlag('SRC_URI', 'sha512sum', '1aab49b2c328c4de8c40e790df99aa327a3aeba5d904696fa151acbfb7b5620ebf3d1e2e9726895d92b6146295840ffe3f2fb7208a81c7b73d2c92c9fcf50dbf')
        d.setVar('DOTNET_ARCH', 'arm64')
    elif re.match('arm$', target_arch):
        d.setVar('SRC_FETCH_ID', '068ebc6e-4a1d-45ec-a766-733a142f2839/e0da4c731c943ca2b267c15edb565108')
        d.setVarFlag('SRC_URI', 'sha512sum', '22e97c15393a4f986563f5e8b031b49983eb55531170b86594d7caab819b41032393a9b3db4ee96cb88fae3971ba243bb64187606e3a00fc64d2e434d906a637')
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
