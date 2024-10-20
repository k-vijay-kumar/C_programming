//As float cannot store large numbers due to its size, double is used

#include <stdio.h>

int main()
{
	double value_d = 20012003.232912;
	printf("20012003.232912 in double: %lf\n", value_d);
	
	float value_f = 20012003.232912;
	printf("20012003.232912 in float: %f\n", value_f);
}

/*
Output
20012003.232912 in double: 20012003.232912
20012003.232912 in float: 20012004.000000     #value is not stored as intended. bcoz size of float is 4 bytes which cannot store such huge values
*/
