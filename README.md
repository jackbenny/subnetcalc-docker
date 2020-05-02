# subnetcalc #
A simple subnet calculator written in C, statically compiled, and
then Dockerized. The *Dockerized* version was created as a demonstration
on how to create really small Docker images from scratch.

![Docker Image Size (latest by date)](https://img.shields.io/docker/image-size/jackbenny/subnetcalc?sort=date)
![Docker Pulls](https://img.shields.io/docker/pulls/jackbenny/subnetcalc)
![Docker Stars](https://img.shields.io/docker/stars/jackbenny/subnetcalc)
![Docker Cloud Automated build](https://img.shields.io/docker/cloud/automated/jackbenny/subnetcalc)
![Docker Cloud Build Status](https://img.shields.io/docker/cloud/build/jackbenny/subnetcalc)

## Manual build 
If you would like to build it yourself, instead of running the
pre-compiled image from Docker Hub, simple type `make`. This will
create a image called *subnetcalc*. If you get a *is up to date*-message,
instead run `make --always-make`.

## Usage
Run it (remove jackbenny/ if you would like to run it from your local build)
and enter the subnet mask in slash notation – but without the slash. 

For example enter 24 for a 24-bit subnet mask and the
program will output the total number of addresses in the range aswell
as the total number of usable addresses for hosts.

    $> docker run -it --rm jackbenny/subnetcalc
    Enter netmask in slash-notation without the slash: 24
    Netmask bit: 24

    256 total addresses
    254 usable addresses for hosts

