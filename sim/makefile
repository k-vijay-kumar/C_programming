#target: dependencies
#	action

all: preprocess compile assemble link execute mem_map 

preprocess:	
	gcc -E -Wall `find ../src/ -name $(f).c` -o output/$(f).i 

compile:
	gcc -S -Wall `find ../src/ -name $(f).c` -o output/$(f).asm 

assemble:
	gcc -c -Wall `find ../src/ -name $(f).c` -o output/$(f).obj 

link:
	gcc -Wall output/$(f).obj -o output/output.exe 

execute:
	./output/output.exe | tee -a $(f).log

mem_map:
	size output/output.exe | tee -a $(f).log

clean: 
	rm output/*.i output/*.asm output/*.obj output/*.exe *.log


# If you have a mingw32-make.exe, then make sure you create an alias for it as make. Else you will need to use the exact word (mingw32-make) to execute the makefile.
# To create an alias, you can add the following line to your .bashrc or .bash_profile file:
# alias make='mingw32-make'	
