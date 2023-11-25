# PintOS Project 

Norman Lim, Richard Le, Vinod Bandla, Parth Chaturvedi

## Installation

Run these commands after running the docker image.

### Assignment 1 - `timer_sleep` implementation
Based off Stanford's PintOS assignment: [Unit 2 - Project 1: Threads](https://www.scs.stanford.edu/23wi-cs212/pintos/pintos_2.html#SEC15)
```bash
docker run --rm --name pintos -v ${pwd}:/pintos -it thierrysans/pintos bash
```

```bash
$cd pintos/src/threads
$make
$cd build
$pintos
$pintos -v -k -T 60 --bochs -- -q run alarm-single
$pintos -v -k -T 60 --bochs -- -q run alarm-multiple
```

### Assignment 2 - Multilevel Feedback Queue Scheduler (MLFQS)
Based off Stanford's PintOS assignment: [Unit 2.2.4 - Advanced Scheduler](https://web.stanford.edu/class/cs140/projects/pintos/pintos_2.html#SEC27)
```bash
$cd pintos/src/threads
$make && make
$make grade
```
