//Union members can be accessed using a pointer to union using -> operator
//Only last modified member can be accessed. (At a time, only 1 member can be accessed)

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
	union my_d_type* ptr;

	ptr = &var;

	ptr->initial = 'V';
	ptr->dob = 7;
       	ptr->yob = 23;

	printf("Initial: %c\n", ptr->initial);
	printf("dob: %d\n", ptr->dob);
	printf("yob: %d\n", ptr->yob);
}

//Output
//Initial: 
//dob: 23
//yob: 23

//Last modified value is 23. So it is displayed.
//Since %c cannot display integer value, it is not displayed
