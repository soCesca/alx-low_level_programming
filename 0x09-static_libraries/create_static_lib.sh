#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic *.c
ar -rc libmy.a *.o
ranlib libmy.a
gcc -c -Wall -Werror -Wextra -pedantic 1-memcpy.c -o 1-memcpy.o
ar -rc libmy.a 1-memcpy.o
ranlib libmy.a
