FROM ubuntu:22.04
RUN apt-get -y update
RUN apt-get -y install john build-essential
COPY crypt.c /
RUN gcc /crypt.c -lcrypt -o /usr/bin/crypt
RUN useradd -p '$y$j9T$oR2ZofMTuH3dpEGbw6c/y.$TwfvHgCl4sIp0b28YTepJ3YVvl/3UyWKeLCmDV1tAd9' karl
CMD bash
