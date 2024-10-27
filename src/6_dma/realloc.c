/*
realloc  - it reallocates the size without losing prev info
if possible, it append the extra memory else it will allocate mem in a new place in heap and copy the old contents then free the old memory

realloc(ptr,newsize);    // new size= n*sizeof(datatype)
if newsize = null realloc acts same as free
*/

#include <stdio.h>
#include <stdlib.h>

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

    int* ptr_1;

    ptr_1 = (int*)realloc(ptr, 3*sizeof(int));
    if (ptr == NULL) 
    {
        printf("Memory not allocated.\n");
        exit(0);
    }

    printf("Reallocated memory start address: %p\n", ptr_1);

    free(ptr);	
}

/*
Output:
Allocated memory start address: 0x5c8d1f0672a0
Reallocated memory start address: 0x5c8d1f0672a0

The address in the output may vary for different runs
*/
