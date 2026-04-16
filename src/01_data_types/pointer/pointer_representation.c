//Pointer value (addresses) are displayed using format specifier %p in hex format

#include <stdio.h>

int main()
{
	int* ptr_int;
	int int_value = 23;

	ptr_int = &int_value;

	printf("Int value: %d\n", int_value);
	printf("Pointer value(address) of int: %p \n", ptr_int);

	printf("Dereferencing pointer: %d\n", *ptr_int);
}

/*
Output:
Int value: 23
Pointer value(address) of int: 0061FF18
Dereferencing pointer: 23
*/