/* 
calloc - contiguous allocation

 malloc aloocates a block of memory
 calloc allocates multiple blocks of memory each of same size
 
 calloc(no of blocks, size of each block)

 value of memory allocated using calloc will have a default value of 0 for each block

 use calloc only if u need to have a default value of 0

To get more info on pointer, refer: C_programming/src/1_data_types/pointer

*/

#include <stdio.h>
#include <stdlib.h>    //for dma

int main()
{
    int* ptr;

    ptr=(int*)calloc(2, sizeof(int));  //ptr=(int*)calloc(2, 4);
    if (ptr == NULL) 
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
	
    *ptr = 10;  //assigning value to the first block of allocated memory    
    *(ptr + 1) = 20;  //assigning value to the second block of allocated memory
    
    printf("Allocated memory start's address at: %p\n", ptr);
    printf("Value at first block (%p) of allocated memory: %d\n", ptr, *ptr);
    printf("Value at second block (%p) of allocated memory: %d\n", ptr + 1, *(ptr+1));
    free(ptr);
}

/*
Output:
Allocated memory start's address at: 00C04FB0
Value at first block (00C04FB0) of allocated memory: 10
Value at second block (00C04FB4) of allocated memory: 20
*/

