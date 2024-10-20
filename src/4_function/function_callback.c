//Passing a function as an argument to another function

#include <stdio.h>

int start(int (*)(int, int), int, int);
int sum(int, int);

int main()
{
	printf("Sum of 2 and 3 is: %d\n",start(&sum, 2, 3));
}

int start (int (*fptr)(int, int), int a, int b)
{
	return (*fptr)(a, b);
}

int sum(int a, int b)
{
	return a+b;
}

/*
Output:
Sum of 2 and 3 is: 5
*/
