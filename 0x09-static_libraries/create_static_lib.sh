#!/bin/bash
gcc -c 0-isupper.c 1-strncat.c 3-islower.c
gcc -c 4-strpbrk.c 0-memset.c 100-atoi.c 3-puts.c
gcc -c 5-strstr.c 0-strcat.c 2-strchr.c 3-strcmp.c
gcc -c 6-abs.c 1-isdigit.c 2-strlen.c
gcc -c 3-strspn.c 9-strcpy.c 1-memcpy.c
gcc -c 2-strncpy.c 4-isalpha.c _putchar.c
ar rc liball.a 0-isupper.o 1-strncat.o
ar -q liball.a 3-islower.o 4-strpbrk.o 0-memset.o 100-atoi.o
ar -q liball.a 3-puts.o 5-strstr.o 0-strcat.o
ar -q liball.a 2-strchr.o 3-strcmp.o 6-abs.o 1-isdigit.o
ar -q liball.a 2-strlen.o 3-strspn.o 9-strcpy.o
ar -q liball.a 1-memcpy.o 2-strncpy.o 4-isalpha.o _putchar.o
