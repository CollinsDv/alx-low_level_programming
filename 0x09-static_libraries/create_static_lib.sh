#!/bin/bash
# Find all .c files in the current directory and its subdirectories
find . -name '*.c' -exec gcc -c -Wall -Werror -Wextra {} +

# Create a static library named liball.a from the generated .o files
ar -rcs liball.a '*.o'
