# PintOS Project 

Norman Lim, Richard Le, Vinod Bandla

## Installation

Run these commands after running the docker image.

```bash
docker run --rm --name pintos -v ${pwd}:/pintos -it thierrysans/pintos bash
```

```bash
$cd pintos/src/threads
$make
$cd build
$pintos
$pintos -v -k -T 60 --bochs -- -q run alarm-single
```
