//Function is a piece of code that performs a specific task. 
//It is a block of code that can be reused multiple times in a program. 
//Functions help in breaking down a large program into smaller, manageable pieces, making it easier to read and maintain.

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
