#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -lm -o 105-jump
./105-jump
echo -e "\n\nREMOVING THE COMPILED FILE '105-jump'\n"
rm 105-jump
