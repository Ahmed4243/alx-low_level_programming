#!/bin/sh

# Create a list of all the .c files in the current directory
c_files=$(find . -name "*.c")

# Compile all the .c files into object files
gcc -c -Wall -Werror -Wextra $c_files

# Create a static library called liball.a from the object files
ar -rcs liball.a *.o
