FROM scratch
LABEL maintainer="Jack-Benny Persson <jack-benny@cyberinfo.se>"
COPY subnetcalc /subnetcalc
ENTRYPOINT ["/subnetcalc"]
