#!/bin/bash

c_files=$(ls *.c 2>/dev/null)

if [ -z "$c_files" ]; then
	echo "No .c files found in the current directory."
	exit 1
fi
gcc -fPIC -shared -o liball.so $c_files

if [ $? -eq 0 ]; then
	echo "Dynamic library liball.so created successfully."
else
	echo "Error during compilation."
fi

