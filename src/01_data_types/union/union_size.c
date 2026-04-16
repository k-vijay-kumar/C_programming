//Union is similar to structure but, the union allocates memory to only one member at a time.
/*
 * Union size calculation uses the size of largest member of union
 * Since, only one member can be accessed at a time, so memory is allocated to only one member at a time
 * Hence, the size of union is equal to the size of largest member of union

 */

#include <stdio.h>

int main()
{	
	union my_d_type
	{
		char initial;
		int dob;
		int yob;
	};

	union my_d_type var;
	printf("Size of union my_d_type data type is %u bytes\n", sizeof(var));
}

/*
Output
Size of union my_d_type data type is 4 bytes

size = max(1, 4, 4)
1 is 1 byte mem for char
4 is 4 byte memory for int
*/
