# C_programming
Basics of C Programming Language		<br/>

---
## Directory Structure:
This navigates users to find out the directory locations...		<br/>

C_programming/			<br/>
├── README.md   		<br/>
├── sim				<br/>
│   ├── makefile		<br/>
│   ├── output			<br/>
│   └── run.sh			<br/>
└── src				<br/>
    ├── 000_hello_world.c	<br/>
    ├── 00_C_Basics			<br/>
    ├── 1_data_types		<br/>
    ├── 2_constants		<br/>
    ├── 3_alias			<br/>
    ├── 4_function		<br/>
    ├── 5_file			<br/>
    └── 6_dma			<br/>

10 directories, 4 files		<br/>

---

## File Structure:
This navigates users to find out the directory and file locations...		<br/>

C_programming/						<br/>
├── README.md						<br/>
├── sim							<br/>
│   ├── makefile					<br/>
│   ├── output						<br/>
│   └── run.sh						<br/>
└── src							<br/>
    ├── 000_hello_world.c				<br/>
    ├── 00_C_Basics                     <br/>
    │   ├── compilation_flow.txt			<br/>
    │   ├── memory_mapping.txt					<br/>
    │   └── storage_classes.txt				<br/>
    ├── 01_data_types			<br/>
    │   ├── basic					<br/>
    │   │   ├── char					<br/>
    │   │   │   ├── char_representation.c		<br/>
    │   │   │   └── char_size.c				<br/>
    │   │   ├── double					<br/>
    │   │   │   ├── double_need.c			<br/>
    │   │   │   ├── double_representation1.c		<br/>
    │   │   │   └── double_size.c			<br/>
    │   │   ├── float					<br/>
    │   │   │   ├── float_representation.c		<br/>
    │   │   │   └── float_size.c			<br/>
    │   │   ├── int					<br/>
    │   │   │   ├── int_representation.c		<br/>
    │   │   │   └── int_size.c				<br/>
    │   │   ├── syntax.txt				<br/>
    │   │   └── void					<br/>
    │   │       └── void_size.c				<br/>
    │   ├── pointer					<br/>
    │   │   ├── pointer_arithmetic.c			<br/>
    │   │   ├── pointer_representation.c		<br/>
    │   │   ├── pointer_size.c				<br/>
    │   │   ├── syntax.txt				<br/>
    │   │   └── types_of_ptr.txt			<br/>
    │   ├── structure					<br/>
    │   │   ├── struct_access.c				<br/>
    │   │   ├── struct_pointer_access.c			<br/>
    │   │   ├── struct_size.c				<br/>
    │   │   ├── struct_size_packed.c			<br/>
    │   │   └── syntax.txt				<br/>
    │   └── union					<br/>
    │       ├── syntax.txt				<br/>
    │       ├── union_access.c				<br/>
    │       ├── union_pointer_access.c			<br/>
    │       └── union_size.c				<br/>
    ├── 2_constants					<br/>
    │   ├── const					<br/>
    │   │   ├── const.c					<br/>
    │   │   └── syntax.txt				<br/>
    │   ├── enum					<br/>
    │   │   ├── enum.c					<br/>
    │   │   └── syntax.txt				<br/>
    │   └── macros					<br/>
    │       ├── macros.c				<br/>
    │       └── syntax.txt				<br/>
    ├── 3_alias						<br/>
    │   ├── syntax.txt					<br/>
    │   └── typedef.c					<br/>
    ├── 4_function					<br/>
    │   ├── function.c					<br/>
    │   ├── function_callback.c				<br/>
    │   ├── function_ptr.c				<br/>
    │   └── syntax.txt					<br/>
    ├── 5_file						<br/>
    │   ├── append.c					<br/>
    │   ├── append_plus.c				<br/>
    │   ├── fseek.c					<br/>
    │   ├── ftell.c					<br/>
    │   ├── read.c					<br/>
    │   ├── read_plus.c					<br/>
    │   ├── syntax.txt					<br/>
    │   ├── write.c					<br/>
    │   └── write_plus.c				<br/>
    └── 6_dma						<br/>
        ├── calloc.c					<br/>
        ├── malloc.c					<br/>
        ├── realloc.c					<br/>
        └── syntax.txt					<br/>

22 directories, 57 files				<br/>

---

## Steps to run a program:

### Checkout:

- Creating key-pair:
	- `ssh-keygen -t ed25519 -C "your_email@example.com"`  				<br/>
	
 	Use the noreply email of your github account for efficiency  			<br/>
	When asked for the filename to save the key, enter `~/.ssh/<filename>`		<br/>
	Dont use any passphrase. Just press enter. Keys will be generated.		<br/>

- Adding config file for efficient use of multiple github accounts:			<br/>
	- Creating config file
   
	```
 	cd ~/.ssh/				
	mkdir config				
	cd config					
	gvim config
 	```									
 
 	- Enter the below text in config file:			

	```
 	Host <your_hostname> github.com			
		Hostname github.com
		AddKeysToAgent yes				
		PreferredAuthentications publickey		
		IdentityFile ~/.ssh/<filename>
 	```		
- Adding the ssh public key in Github
```
	Open your gitub account			
 	Settings -> SSH and GPG Keys -> New SSH Key		
  	Add the key				
   	Click on Add SSH Key
  ```
- cloning the repo:
	cd to the directory where you want to clone the repo
	- `git clone git@<your_hostname>:k-vijay-kumar/C_programming.git`		
		
### Running a program:

## 1. Using Makefile
- `cd C_programming/sim/`
- `make all f=<filename_without_.c>`     	<br/>
	The above command completes all processses(process_name): preprocess, compile, assemble, link, execute and mem_map

- In order to perform a seperate process:
	- `make <process_name> f=<filename_without_.c>`		<br/>
	All the output files generated will be in the folder C_programming/sim/output/		<br/>
	The log of the process performed will be in the folder C_programming/sim/

## 2. Using Shell Script
- `cd C_programming/sim/`
- `./run.sh -f <filename_without_.c>`     	<br/>
	The above command completes all processses(process_name): preprocess, compile, assemble, link, execute and mem_map

---
