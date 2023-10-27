#!/bin/bash

# Compile all .c files into object files
gcc -c *.c

# Create a static library from the object files
ar rc liball.a *.o

# Index the static library
ranlib liball.a
