#target: dependencies
#	action

all: preprocess compile assemble link execute mem_map 

preprocess:	
	gcc -E -Wall `find ../src/ -name $(filename).c` -o output/$(filename).i 

compile:
	gcc -S -Wall `find ../src/ -name $(filename).c` -o output/$(filename).asm 

assemble:
	gcc -c -Wall `find ../src/ -name $(filename).c` -o output/$(filename).obj 

link:
	gcc -Wall output/*.obj -o output/output.exe 

execute:
	./output/output.exe | tee -a $(filename).log

mem_map:
	size output/output.exe | tee -a $(filename).log

clean: 
	rm output/*.i output/*.asm output/*.obj output/*.exe *.log
