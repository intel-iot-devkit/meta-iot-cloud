DESCRIPTION = ".NET Core Runtime, SDK & CLI tools"
HOMEPAGE = "https://www.microsoft.com/net/core"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=4283671594edec4c13aeb073c219237a"

COMPATIBLE_HOST ?= "x86_64.*-linux"

DEPENDS += "\
	curl \
	zlib \
	util-linux \
	icu \
	openssl \
	libunwind \
"

RDEPENDS_${PN}_class-target += "\
	lttng-ust \
	krb5 \
	libicuuc \
	libicui18n \
"

PR = "r0"

SRC_URI =  "https://download.microsoft.com/download/7/3/A/73A3E4DC-F019-47D1-9951-0453676E059B/dotnet-sdk-2.0.2-linux-x64.tar.gz;downloadfilename=dotnet-${PV}.tar.gz"
SRC_URI[md5sum] = "2894653e9465fa67dbddd9ec3ae3c47a"
SRC_URI[sha256sum] = "2a9e0ed251a7f98a46473f694532acdc5a0960d32204e82315c38c1b29fdd317"

S = "${WORKDIR}"

HOST_FXR = "2.0.0"
SHARED_FRAMEWORK = "2.0.0"
SDK = "2.0.2"

PACKAGES = "\
	${PN} \
	${PN}-dev \
"

do_configure[noexec] = "1"
do_compile[noexec] = "1"

do_install() {
	install -d ${D}${bindir}
	install -d ${D}${datadir}/dotnet
	install -d ${D}${datadir}/dotnet/host/fxr
	install -d ${D}${datadir}/dotnet/sdk
	install -d ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App

	install -m 0755 ${S}/dotnet ${D}${datadir}/dotnet
	install -m 0644 ${S}/LICENSE.txt ${D}${datadir}/dotnet
	install -m 0644 ${S}/ThirdPartyNotices.txt ${D}${datadir}/dotnet

	cp -r ${S}/sdk/${SDK} ${D}${datadir}/dotnet/sdk
	cp -r ${S}/host/fxr/${HOST_FXR} ${D}${datadir}/dotnet/host/fxr
	cp -r ${S}/shared/Microsoft.NETCore.App/${SHARED_FRAMEWORK} ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App
	cp -r ${S}/store ${D}${datadir}/dotnet
	cp -r ${S}/additionalDeps ${D}${datadir}/dotnet

	# Symlinks
	ln -s ${datadir}/dotnet/dotnet ${D}${bindir}/dotnet
}

FILES_${PN} = "\
	${bindir} \
	${datadir}/dotnet/dotnet \
	${datadir}/dotnet/*.txt \
	${datadir}/dotnet/host \
	${datadir}/dotnet/shared \
"

FILES_${PN}-dev = "\
	${datadir}/dotnet/additionalDeps \
	${datadir}/dotnet/sdk \
	${datadir}/dotnet/store \
"

RRECOMMENDS_dotnet-dev[nodeprrecs] = "1"

INSANE_SKIP_${PN} = "already-stripped staticdev ldflags libdir"
INSANE_SKIP_${PN}-dev = "libdir"
INHIBIT_PACKAGE_DEBUG_SPLIT = "1"

BBCLASSEXTEND = "native"
