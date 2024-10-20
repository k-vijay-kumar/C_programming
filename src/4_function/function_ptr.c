/*
 * Function ptr is used to reference a function.
 * It holds the starting address of a function
 *
 */


#include <stdio.h>

int sum(int, int);

int main()
{
	int (*f_ptr)(int, int);
	f_ptr = &sum;

	printf("Sum of 2 and 3 is: %d\n",(*f_ptr)(2, 3));
}

int sum(int a, int b)
{
	return a+b;
}

/*
Output:
Sum of 2 and 3 is: 5
*/
