#!/bin/bash

clean()
{
	rm output/*.i output/*.asm output/*.obj output/*.exe *.log
}


invalid()
{
	echo "INVALID OPTION"
}


filename="hello_world"


while getopts "f:cr" option
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

gcc -E `find ../src/ -name ${filename}.c` -o output/${filename}.i 

gcc -S `find ../src/ -name ${filename}.c` -o output/${filename}.asm 

gcc -c `find ../src/ -name ${filename}.c` -o output/${filename}.obj 

gcc output/*.obj -o output/output.exe 

./output/output.exe | tee -a ${filename}.log

size output/output.exe | tee -a ${filename}.log

