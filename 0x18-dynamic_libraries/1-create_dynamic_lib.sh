#!/bin/bash
gcc -c -Wall -Werror -Wextra *.c && gcc -shared -o liball.so *.o