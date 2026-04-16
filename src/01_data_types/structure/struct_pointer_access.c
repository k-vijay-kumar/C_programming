//Structure members can be accessed using a pointer to structure using -> operator

#include <stdio.h>

int main()
{	
	struct my_d_type
	{
		char initial;
		int dob;
		int yob;
	};

	struct my_d_type var;
	struct my_d_type* ptr;

	ptr = &var;

	ptr->initial = 'V';
	ptr->dob = 7;
    ptr->yob = 23;

	printf("Initial: %c\n", ptr->initial);
	printf("dob: %d\n", ptr->dob);
	printf("yob: %d\n", ptr->yob);
}

/*
Output
Initial: V
dob: 7
yob: 23
*/
