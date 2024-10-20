//Pointer of any data type is dependent only on the system. (Here it is 8 bytes)

#include <stdio.h>

int main()
{
	//Considering 64 bit(8 byte) system

	printf("Size of void pointer data type is %ld bytes\n", sizeof(void*));
	printf("Size of int pointer data type is %ld bytes\n", sizeof(int*));
	printf("Size of float pointer data type is %ld bytes\n", sizeof(float*));
	printf("Size of double pointer data type is %ld bytes\n", sizeof(double*));
	printf("Size of char pointer data type is %ld bytes\n", sizeof(char*));
}

/*
Output
Size of void pointer data type is 8 bytes
Size of int pointer data type is 8 bytes
Size of float pointer data type is 8 bytes
Size of double pointer data type is 8 bytes
Size of char pointer data type is 8 bytes
*/

