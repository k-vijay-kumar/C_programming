#include <stdio.h>

int main()
{
	int a = 4;

	float b = a;              // value 2 is treated as floating point value and stored in memory (as per Implicit normalisation and floating point representation of value 2). b = 4.000000
	float c = *(float*)&a;    // 2 (value in memory at address of a) is treated as floating point value stored (as per Implicit normalisation and floating point representation). This value (2) stored in memory is dereferenced into c. c = 0.000000

	printf("%f\n", c);
	printf("%f\n", b);
}
