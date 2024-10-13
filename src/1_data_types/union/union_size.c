//Union is similar to structure but, the union allocates max of mem allocated to each member.

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
	printf("Size of struct my_d_type data type is %ld bytes\n", sizeof(var));
}

//Output
//Size of struct my_d_type data type is 4 bytes


//size = max(1, 4, 4)
//1 is 1 byte mem for char
//4 is 4 byte memory for int
