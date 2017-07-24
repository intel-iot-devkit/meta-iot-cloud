DESCRIPTION = ".NET Core Runtime, SDK & CLI tools"
HOMEPAGE = "https://www.microsoft.com/net/core"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=4283671594edec4c13aeb073c219237a"

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
"

PR = "r2"

SRC_URI =  "https://download.microsoft.com/download/F/A/A/FAAE9280-F410-458E-8819-279C5A68EDCF/dotnet-sdk-2.0.0-preview2-006497-linux-x64.tar.gz;downloadfilename=dotnet-${PV}.tar.gz"
SRC_URI[md5sum] = "5d3019383edd2247207814f224f9bd42"
SRC_URI[sha256sum] = "f70b6dfc4e46230001ef863b54992b32bb04c998b098ad58dd47152f348a0997"

S = "${WORKDIR}"

HOST_FXR = "2.0.0-preview2-25407-01"
SHARED_FRAMEWORK = "2.0.0-preview2-25407-01"
SDK = "2.0.0-preview2-006497"

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
	install -d ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App

	install -m 0755 ${S}/dotnet ${D}${datadir}/dotnet
	install -m 0644 ${S}/LICENSE.txt ${D}${datadir}/dotnet
	install -m 0644 ${S}/ThirdPartyNotices.txt ${D}${datadir}/dotnet

	cp -r ${S}/sdk ${D}${datadir}/dotnet
	cp -r ${S}/host/fxr/${HOST_FXR} ${D}${datadir}/dotnet/host/fxr
	cp -r ${S}/shared/Microsoft.NETCore.App/${SHARED_FRAMEWORK} ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App
	cp -r ${S}/store ${D}${datadir}/dotnet
	cp -r ${S}/additionalDeps ${D}${datadir}/dotnet

	# Symlinks
	ln -s ${datadir}/dotnet/dotnet ${D}${bindir}/dotnet
}

FILES_${PN} += "\
	${bindir} \
	${datadir}/dotnet/dotnet \
	${datadir}/dotnet/*.txt \
	${datadir}/dotnet/host \
	${datadir}/dotnet/shared \
"

FILES_${PN}-dev += "\
	${datadir}/dotnet/additionalDeps \
	${datadir}/dotnet/sdk \
	${datadir}/dotnet/store \
"

RRECOMMENDS_dotnet-dev[nodeprrecs] = "1"

INSANE_SKIP_${PN} = "already-stripped staticdev ldflags libdir"
INHIBIT_PACKAGE_DEBUG_SPLIT = "1"

BBCLASSEXTEND = "native"
