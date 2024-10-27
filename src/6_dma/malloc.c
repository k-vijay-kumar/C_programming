/* 
malloc - memory allocation
 
malloc(n*sizeof(datatype));  - it returns the base address of allocated memory from heap in the form of void pointer 

we need to type cast to the req datatype of pointer

Eg:
 to type cast to int data type
 int *ptr;
 ptr=(int*)malloc(2*sizeof(int));

 if malloc could not allocate memory, it returns the null pointer

 value of memory allocated using malloc will have a default value of garbage for each block

To get more info on pointer, refer: C_programming/src/1_data_types/pointer

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
	
    printf("Allocated memory start address: %p\n", ptr);

    free(ptr);
}

/*
Output:
Allocated memory start address: 0x63c54f40f2a0

The address in the output may vary for different runs
*/
