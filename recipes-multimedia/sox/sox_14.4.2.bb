DESCRIPTION="SoX is the Swiss Army knife of sound processing programs."
HOMEPAGE = "http://sox.sourceforge.net"
SECTION = "audio"
LICENSE = "GPLv2 & LGPLv2.1"
LIC_FILES_CHKSUM = "\
    file://LICENSE.GPL;md5=751419260aa954499f7abaabaa882bbe \
    file://LICENSE.LGPL;md5=fbc093901857fcd118f065f900982c24 \
"

SRC_URI = "git://git.code.sf.net/p/sox/code"
SRCREV = "45b161d73ec087a8e003747b1aed07cd33589bca"

inherit autotools pkgconfig

PR = "r0"

EXTRA_OECONF += "--without-ladspa --without-twolame"

PACKAGECONFIG ??= "\
    ${@bb.utils.contains('DISTRO_FEATURES', 'pulseaudio', 'pulseaudio', '', d)} \
    ${@bb.utils.contains('DISTRO_FEATURES', 'alsa', 'alsa', '', d)} \
    magic \
    vorbis \
    sndfile \
"
PACKAGECONFIG[magic] = "--with-magic,--without-magic,file,"
PACKAGECONFIG[png] = "--with-png,--without-png,libpng,"
PACKAGECONFIG[mad] = "--with-mad,--without-mad,libmad,"
PACKAGECONFIG[id3tag] = "--with-id3tag,--without-id3tag,libid3tag,"
PACKAGECONFIG[lame] = "--with-lame,--without-lame,lame,"
PACKAGECONFIG[vorbis] = "--with-oggvorbis=dyn,--with-oggvorbis=no,libvorbis,"
PACKAGECONFIG[opus] = "--with-opus,--with-opus=no,libopus,"
PACKAGECONFIG[flac] = "--with-flac,--with-flac=no,flac,"
PACKAGECONFIG[amrwb] = "--with-amrwb,--with-amrwb=no,opencore-amr,"
PACKAGECONFIG[amrnb] = "--with-amrnb,--with-amrnb=no,opencore-amr,"
PACKAGECONFIG[wavpack] = "--with-wavpack=dyn,--with-wavpack=no,wavpack,"
PACKAGECONFIG[pulseaudio] = "--with-pulseaudio=dyn,--with-pulseaudio=no,pulseaudio,"
PACKAGECONFIG[alsa] = "--with-alsa=dyn,--with-alsa=no,alsa-lib,"
PACKAGECONFIG[ao] = "--with-ao=dyn,--without-ao,libao,"
PACKAGECONFIG[sndfile] = "--with-sndfile,--without-sndfile,libsndfile1,"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native"
