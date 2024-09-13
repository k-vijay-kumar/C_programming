#target: dependencies
#	action

all: preprocess compile assemble link execute	

preprocess:	
	gcc -E `find ../src/ -name $(file_name).c` -o $(file_name).i

compile:
	gcc -S `find ../src/ -name $(file_name).c` -o $(file_name).asm

assemble:
	gcc -c `find ../src/ -name $(file_name).c` -o $(file_name).obj

link:
	gcc *.obj -o output.exe

execute:
	./output.exe

clean: 
	rm *.i *.asm *.obj *.exe
