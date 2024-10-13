//Pointers are incremented in terms of its data type size.
//If a pointer is incremented by n, it is actually incremented by (n*data_type_size)
//Similarly of decrement of pointer
//
//But difference of 2 pointers give the n, where n is increment between 2 pointers.
//i.e., n = (Numeric diff b/w pointers / size of data_type)
//2 pointers of same data type can only be subtracted
//
//Addition of 2 pointers is not allowed

#include <stdio.h>

int main()
{
	int* ptr1;
	int* inc_ptr1;
	int* dec_ptr1;

	int diff_of_ptr;
	
	int var = 29;

	ptr1 = &var;
	inc_ptr1 = ptr1 + 1;
	dec_ptr1 = ptr1 - 1;
	diff_of_ptr = inc_ptr1 - ptr1;

	printf("Value of ptr1: %p\n", ptr1);
	printf("Value of ptr1 +1: %p\n", inc_ptr1);
	printf("Value of ptr1 - 1: %p\n", dec_ptr1);
	printf("Difference of ptr1 and ptr1+1: %d\n", diff_of_ptr);
}

//Output:
//Value of ptr1: 0x7ffd51fc7068
//Value of ptr1 +1: 0x7ffd51fc706c
//Value of ptr1 - 1: 0x7ffd51fc7064
//Difference of ptr1 and ptr1+1: 1
