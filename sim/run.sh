#!/bin/bash

clean()
{
	rm -f output/*.i output/*.asm output/*.obj output/*.exe *.log *.txt
}


invalid()
{
	echo "INVALID OPTION"
}


filename="000_hello_world"


while getopts "f:c" option
do
	case ${option} in
		f)
			filename=${OPTARG};;
		c)
			clean
			exit;;
		\?)
			invalid
			exit;;
	esac
done


#Run commands

echo "${filename}"

if [ -d output ]; then
	:
elif [ -e output ]; then
	echo "output exists but is not a directory" >&2
	exit 1
else
	mkdir -p output || exit 1
fi

gcc -E `find ../src/ -name ${filename}.c` -o output/${filename}.i 

gcc -S `find ../src/ -name ${filename}.c` -o output/${filename}.asm 

gcc -c `find ../src/ -name ${filename}.c` -o output/${filename}.obj 

gcc output/${filename}.obj -o output/output.exe 

./output/output.exe | tee -a ${filename}.log

size output/output.exe | tee -a ${filename}.log

