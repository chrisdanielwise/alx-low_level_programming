#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
ar rcs libmy.a *.o
