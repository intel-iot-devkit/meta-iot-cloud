FROM ubuntu:16.04

RUN apt-get update && \
    apt-get install -y --no-install-recommends apt-utils

RUN apt-get update && apt-get install -y --no-install-recommends \
    build-essential chrpath curl diffstat gcc-multilib \
    gawk git-core libsdl1.2-dev texinfo unzip wget xterm

RUN apt-get install -y --no-install-recommends \
    ca-certificates bzip2 dosfstools mtools parted syslinux tree cpio socat

# Prevent git using git:// protocol to clone repos. use https:// instead
RUN git config --global url.https://github.com/.insteadOf git://github.com/

# Set default working directory
WORKDIR /usr/src/app

CMD bash
