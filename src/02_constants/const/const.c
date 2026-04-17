#include <stdio.h>

const int var = 29;

int main()
{
	//var = 30; //error: assignment of read-only variable 'var'
	printf("Value of const var: %d\n", var);
}

/*
Output:
Value of const var: 29
*/
