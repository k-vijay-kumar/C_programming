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
	
    printf("Allocated memory start address: %p\n", ptr);
    free(ptr);
}

/*
Output:
Allocated memory start address: 0x585d4f59a2a0

The address in the output may vary for different runs
*/

