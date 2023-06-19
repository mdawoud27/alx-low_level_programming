#!/bin/bash
c_files=$(ls *.c 2>/dev/null)
if [[ -z $c_files ]]; then
	echo "No .c files found in the current directory."
	exit 1
fi
for file in $c_files; do
	gcc -c -FPIC "$file" -o "${file%.c}.o"
done
gcc -shared -o liball.so *.o
rm -f *.o
echo "Dynamic library liball.so created successfully."
