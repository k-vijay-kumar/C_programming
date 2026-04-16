/*
 * Structure packing is used to remove the effect of padding (adding empty bytes to structure)
 * Adding prama pack(n) preprocessor, tells the compiler to allocate memory considering n byte packing, 
 * i.e., the members of structure are packed to n byte boundary
 *
 */

#include <stdio.h>

#pragma pack(1)

int main()
{
	//Considering 32 bit(4 byte) system
	
	struct my_d_type
	{
		char initial;
		int dob;
		int yob;
	};

	struct my_d_type var;
	printf("Size of struct my_d_type data type is %u bytes\n", sizeof(var));
}

/*
Output
Size of struct my_d_type data type is 9 bytes

Here, memory allocation takes place in the order of member declaration in struct
First, initial variable takes 1 byte of memory
Then, dob takes 4 bytes of memory and it is stored in next byte of memory as per the structure packing. 
Then, yob takes 4 bytes of memory and it is stored in next byte of memory as per the structure packing.

Hence, this struct my_d_type uses 3 addressable locations, in which only 9 (1+44) bytes of memory is allocated to struct
No padding of zeroes
*/
