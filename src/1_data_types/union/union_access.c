/*
Union members can be accessed using . operator
Only one member can be accessed at a time. 
Last modified member can only be accessed
*/

#include <stdio.h>

int main()
{
	//Considering 64 bit(8 byte) system
	
	union my_d_type
	{
		char initial;
		int dob;
		int yob;
	};

	union my_d_type var;
	var.initial = 'V';
	var.dob = 7;
       	var.yob = 23;	

	printf("Initial: %c\n", var.initial);
	printf("dob: %d\n", var.dob);
	printf("yob: %d\n", var.yob);
}

/*
Output
Initial: 
dob: 23
yob: 23

Last modified value is 23. So it is displayed.
Since %c cannot display integer value, it is not displayed
*/
