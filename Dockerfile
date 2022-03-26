FROM ubuntu:16.04

ENV DEBIAN_FRONTEND=noninteractive

RUN sed -i 's|^deb \(.*\)$|deb \1\ndeb-src \1|g' /etc/apt/sources.list && \
    apt update -y && \
    apt upgrade -y && \
    apt install -y \
        build-essential \
        wget \
        libtool-bin \
        automake \
        bison \
        python \
        git \
        libc6 \
        libstdc++6 \
        linux-libc-dev \
        gcc-multilib \
        llvm-dev \
        llvm-5.0 \
        g++ \
        g++-multilib \
        && \
    apt build-dep -y qemu && \
    apt clean


COPY . /intriguer

ARG PIN_ROOT=/intriguer/third_party/pin-3.7-97619-0d0c92f4f/
RUN cd /intriguer/third_party/z3 && \
    python scripts/mk_make.py && \
    cd build && \
    make -j2 && \
    make install && \
    cd /intriguer/pintool && \
    make -j2 && \
    TARGET=ia32 make -j2 && \
    cd /intriguer/traceAnalyzer && \
    make -j2 && \
    cd /intriguer/intriguer_afl && \
    make -j2

ARG CPU_TARGET=x86_64
RUN cd /intriguer/intriguer_afl/qemu_mode && \
    sh ./build_qemu_support.sh

ENV INTRIGUER_ROOT=/intriguer
