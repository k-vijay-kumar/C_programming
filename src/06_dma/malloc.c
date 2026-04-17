/* 
malloc - memory allocation
 
malloc(n*sizeof(datatype));  - it returns the base address of allocated memory from heap in the form of void pointer 

we need to type cast to the required datatype of pointer

Eg:
 To type cast to int data type
 int *ptr;
 ptr=(int*)malloc(2*sizeof(int));

 if malloc could not allocate memory, it returns the null pointer

 Memory allocated using malloc will have a default value of garbage for each block

To get more info on pointer, refer: C_programming/src/01_data_types/pointer

*/

#include <stdio.h>
#include <stdlib.h>    //for dma

int main()
{
    int* ptr;

    ptr=(int*)malloc(2*sizeof(int));  //ptr=(int*)malloc(2*4);
    if (ptr == NULL) 
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
	
    *ptr = 10;  //assigning value to the first block of allocated memory
    *(ptr + 1) = 20;  //assigning value to the second block of allocated memory

    printf("Allocated memory start's address at: %p\n", ptr);
    printf("Value at first block (%p) of allocated memory: %d\n", ptr, *ptr);
    printf("Value at second block (%p) of allocated memory: %d\n", ptr + 1, *(ptr+1) );

    free(ptr);
}

/*
Output:
Allocated memory start's address at: 00974FB0
Value at first block (00974FB0) of allocated memory: 10
Value at second block (00974FB4) of allocated memory: 20
*/
