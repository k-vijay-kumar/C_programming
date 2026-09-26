# C_programming
Basics of C Programming Language		<br/>

---
## Directory Structure:
This navigates users to find out the directory locations...		<br/>

C_programming/			<br/>
├── README.md   		<br/>
├── sim				<br/>
│   ├── output			<br/>
│   └── run.sh			<br/>
└── src				<br/>
    ├── 000_hello_world.c	<br/>
    ├── 00_C_Basics			<br/>
    ├── 01_data_types		<br/>
    ├── 02_constants		<br/>
    ├── 03_typedef			<br/>
    ├── 04_function		<br/>
    ├── 05_file			<br/>
    └── 06_dma			<br/>

---

## File Structure:
This navigates users to find out the directory and file locations...		<br/>

C_programming/						<br/>
├── README.md						<br/>
├── sim							<br/>
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
    │   │   │   ├── double_representation.c		<br/>
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
    ├── 02_constants					<br/>
    │   ├── const					<br/>
    │   │   ├── const.c					<br/>
    │   │   └── syntax.txt				<br/>
    │   ├── enum					<br/>
    │   │   ├── enum.c					<br/>
    │   │   └── syntax.txt				<br/>
    │   └── macros					<br/>
    │       ├── macros.c				<br/>
    │       └── syntax.txt				<br/>
    ├── 03_typedef						<br/>
    │   ├── syntax.txt					<br/>
    │   └── typedef.c					<br/>
    ├── 04_function					<br/>
    │   ├── function.c					<br/>
    │   ├── function_callback.c				<br/>
    │   ├── function_ptr.c				<br/>
    │   └── syntax.txt					<br/>
    ├── 05_file						<br/>
    │   ├── append.c					<br/>
    │   ├── append_plus.c				<br/>
    │   ├── fseek.c					<br/>
    │   ├── ftell.c					<br/>
    │   ├── read.c					<br/>
    │   ├── read_plus.c					<br/>
    │   ├── syntax.txt					<br/>
    │   ├── write.c					<br/>
    │   └── write_plus.c				<br/>
    └── 06_dma						<br/>
        ├── calloc.c					<br/>
        ├── malloc.c					<br/>
        ├── realloc.c					<br/>
        └── syntax.txt					<br/>

---

## Steps to run a program:

### Checkout (CLone the repository):

    Refer https://github.com/k-vijay-kumar/GitHub to clone the C_programming repository to your local machine
		
### Running a program:

## Running with the Shell Script
- `cd C_programming/sim/`
- `./run.sh [-f <filename_without_.c>]` (default: `000_hello_world`)
- `./run.sh -c` to clean generated build files.

The script preprocesses, compiles, assembles, links, and runs the selected program. Intermediate files and the executable are written to `sim/output/`; the log is written to `sim/<filename>.log`. The final `size` command reports executable section sizes, not a process memory map.

---
