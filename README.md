# C_programming
Basics of C Programming Language

---
## Directory Structure:
This navigates users to find out the directory locations...

C_programming/
├── README.md
├── sim
│   ├── makefile
│   ├── output
│   └── run.sh
└── src
    ├── 00_hello_world.c
    ├── 0_info
    ├── 1_data_types
    ├── 2_constants
    ├── 3_alias
    ├── 4_function
    ├── 5_file
    └── 6_dma

10 directories, 4 files

---

## File Structure:
This navigates users to find out the directory and file locations...

C_programming/
├── README.md
├── sim
│   ├── makefile
│   ├── output
│   └── run.sh
└── src
    ├── 00_hello_world.c
    ├── 0_info
    │   ├── compilation_flow.txt
    │   ├── mem_map.txt
    │   └── storage_cls.txt
    ├── 1_data_types
    │   ├── basic
    │   │   ├── char
    │   │   │   ├── char_representation.c
    │   │   │   └── char_size.c
    │   │   ├── double
    │   │   │   ├── double_need.c
    │   │   │   ├── double_representation1.c
    │   │   │   └── double_size.c
    │   │   ├── float
    │   │   │   ├── float_representation.c
    │   │   │   └── float_size.c
    │   │   ├── int
    │   │   │   ├── int_representation.c
    │   │   │   └── int_size.c
    │   │   ├── syntax.txt
    │   │   └── void
    │   │       └── void_size.c
    │   ├── pointer
    │   │   ├── pointer_arithmetic.c
    │   │   ├── pointer_representation.c
    │   │   ├── pointer_size.c
    │   │   ├── syntax.txt
    │   │   └── types_of_ptr.txt
    │   ├── structure
    │   │   ├── struct_access.c
    │   │   ├── struct_pointer_access.c
    │   │   ├── struct_size.c
    │   │   ├── struct_size_packed.c
    │   │   └── syntax.txt
    │   └── union
    │       ├── syntax.txt
    │       ├── union_access.c
    │       ├── union_pointer_access.c
    │       └── union_size.c
    ├── 2_constants
    │   ├── const
    │   │   ├── const.c
    │   │   └── syntax.txt
    │   ├── enum
    │   │   ├── enum.c
    │   │   └── syntax.txt
    │   └── macros
    │       ├── macros.c
    │       └── syntax.txt
    ├── 3_alias
    │   ├── syntax.txt
    │   └── typedef.c
    ├── 4_function
    │   ├── function.c
    │   ├── function_callback.c
    │   ├── function_ptr.c
    │   └── syntax.txt
    ├── 5_file
    │   ├── append.c
    │   ├── append_plus.c
    │   ├── fseek.c
    │   ├── ftell.c
    │   ├── read.c
    │   ├── read_plus.c
    │   ├── syntax.txt
    │   ├── write.c
    │   └── write_plus.c
    └── 6_dma
        ├── calloc.c
        ├── malloc.c
        ├── realloc.c
        └── syntax.txt

22 directories, 57 files

---

## Steps to run a program:

### Checkout:

	**Creating key-pair:**
		`ssh-keygen -t ed25519 -C "your_email@example.com"`
			Use the noreply email of your github account for efficiency

		When asked for the filename to save the key, enter `~/.ssh/<filename>`
	
		Dont use any passphrase. Just press enter. Keys will be generated.

	**Adding config file for efficient use of multiple github accounts:**
 ```
		cd ~/.ssh/
		mkdir config
		cd config
		gvim config
```

		Enter the below text in config file:

```
		Host <your_hostname> github.com
			Hostname github.com
			AddKeysToAgent yes
			PreferredAuthentications publickey
			IdentityFile ~/.ssh/<filename>
```
		
	**cloning the repo:**
		cd to the directory where you want to clone the repo
		`git@<your_hostname>:k-vijay-kumar/C_programming.git`		
		
### Running a program:
	`cd C_programming/sim/`
	`make all filename=<filename_without_.c>`
		The above command completes all processses(process_name): preprocess, compile, assemble, link, execute and mem_map

	In order to perform a seperate process:
		`make <process_name> filoename=<filename_without_.c>`
	
	All the output files generated will be in the folder C_programming/sim/output/
	The log of the process performed will be in the folder C_programming/sim/

---
