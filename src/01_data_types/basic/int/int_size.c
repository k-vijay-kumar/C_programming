#include <stdio.h>
#include <stdint.h> //The stdint.h header defines integer types, limits of specified width integer types, 
		    //limits of other integer types and macros for integer constant expressions.

int main()
{
	printf("Size of int data type is %u bytes\n", sizeof(int));

	//signed integer types
	printf("Size of int8_t data type is %u bytes\n", sizeof(int8_t));
	printf("Size of int16_t data type is %u bytes\n", sizeof(int16_t));
	printf("Size of int32_t data type is %u bytes\n", sizeof(int32_t));
	printf("Size of int64_t data type is %u bytes\n", sizeof(int64_t));
	printf("Size of intptr_t data type is %u bytes\n", sizeof(intptr_t));

	//unsigned integer types
	printf("Size of uint8_t data type is %u bytes\n", sizeof(uint8_t));
	printf("Size of uint16_t data type is %u bytes\n", sizeof(uint16_t));
	printf("Size of uint32_t data type is %u bytes\n", sizeof(uint32_t));
	printf("Size of uint64_t data type is %u bytes\n", sizeof(uint64_t));
	printf("Size of uintptr_t data type is %u bytes\n", sizeof(uintptr_t));
}

/*
Outputs
Size of int data type is 4 bytes
Size of int8_t data type is 1 bytes
Size of int16_t data type is 2 bytes
Size of int32_t data type is 4 bytes
Size of int64_t data type is 8 bytes
Size of intptr_t data type is 4 bytes
Size of uint8_t data type is 1 bytes
Size of uint16_t data type is 2 bytes
Size of uint32_t data type is 4 bytes
Size of uint64_t data type is 8 bytes
Size of uintptr_t data type is 4 bytes
*/
