//Pointer of any data type is dependent only on the target architecture of the compiler. (Here it is 4 bytes)

#include <stdio.h>

int main()
{
	printf("Size of void pointer data type is %u bytes\n", sizeof(void*));
	printf("Size of int pointer data type is %u bytes\n", sizeof(int*));
	printf("Size of float pointer data type is %u bytes\n", sizeof(float*));
	printf("Size of double pointer data type is %u bytes\n", sizeof(double*));
	printf("Size of char pointer data type is %u bytes\n", sizeof(char*));
}

/*
Output
Size of void pointer data type is 4 bytes
Size of int pointer data type is 4 bytes
Size of float pointer data type is 4 bytes
Size of double pointer data type is 4 bytes
Size of char pointer data type is 4 bytes
*/