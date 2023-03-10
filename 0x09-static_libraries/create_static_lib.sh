#!/bin/bash
gcc -wall -pedantic -weror -wextra -c *.c
ar -rc liball.a *.o
ranlib liball.o
