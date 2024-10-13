//Structure packing is used to remove the effect of padding (adding empty bytes to structure)
//Adding prama pack(n) preprocessor, tells the compiler to allocate memory without padding any empty bytes

#include <stdio.h>

#pragma pack(1)

int main()
{
	//Considering 64 bit(8 byte) system
	
	struct my_d_type
	{
		char initial;
		int dob;
		int yob;
	};

	struct my_d_type var;
	printf("Size of struct my_d_type data type is %ld bytes\n", sizeof(var));
}

//Output
//Size of struct my_d_type data type is 9 bytes

//Here, memory allocation takes place in the order of member declaration in struct
//First, initial variable takes 1 byte of memory
//Then, dob takes 4 bytes of memory
//Now since already 5 bytes of memory is allocated, In this addressable loccation only 3 bytes are remaining.
//As it is said memory is packed to 1 byte, the yob is allocated next 4 bytes of memory,
//i.e., 3 bytes from this addressable location and 2 bytes from next addressable location
//
//Hence, this struct my_d_type uses 2 addressable locations, in which only 9 (4+1+4) bytes of memory is allocated to struct
//No padding of zeroes
