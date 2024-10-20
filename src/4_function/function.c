//Function is a piece of code which can remove redundancy

#include <stdio.h>

int sum(int, int);

int main()
{
	printf("Sum of 2 and 3 is: %d\n",sum(2, 3));
}

int sum(int a, int b)
{
	return a+b;
}

/*
Output:
Sum of 2 and 3 is: 5
*/
