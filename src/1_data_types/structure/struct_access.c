//Structure members can be accessed using . operator

#include <stdio.h>

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
	var.initial = 'V';
	var.dob = 7;
       	var.yob = 23;	
	printf("Initial: %c\n", var.initial);
	printf("dob: %d\n", var.dob);
	printf("yob: %d\n", var.yob);
}

//Output
//Initial: V
//dob: 7
//yob: 23

