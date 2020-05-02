FROM scratch
COPY subnetcalc /subnetcalc
ENTRYPOINT ["/subnetcalc"]
