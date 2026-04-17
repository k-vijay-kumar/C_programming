/*
realloc  - it reallocates the size without losing prev info
if possible, it append the extra memory else it will allocate mem in a new place in heap and copy the old contents then free the old memory

realloc(ptr,new_size);    // new_size= n*sizeof(datatype)
if new_size = null realloc acts same as free
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ptr;
    int a = 10;
    int b = 20;

    ptr=(int*)malloc(1*sizeof(int));  //ptr=(int*)malloc(2*4);
    if (ptr == NULL) 
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
	
    *ptr = a;  //assigning value to the first block of allocated memory 

    printf("Allocated memory start's address at: %p\n", ptr);
    printf("Value at first block (%p) of allocated memory: %d\n", ptr, *ptr);


    int* ptr_1;

    ptr_1 = (int*)realloc(ptr, 2*sizeof(int));
    if (ptr == NULL) 
    {
        printf("Memory not allocated.\n");
        exit(0);
    }

    *(ptr + 1) = b;  //assigning value to the second block of allocated memory

    printf("Reallocated memory start's address at: %p\n", ptr_1);
    printf("Value at second block (%p) of allocated memory: %d\n", ptr_1 + 1, *(ptr_1 + 1));

    free(ptr);	
}

/*
Output:
Allocated memory start's address at: 00B74FB8
Value at first block (00B74FB8) of allocated memory: 10
Reallocated memory start's address at: 00B74FB8
Value at second block (00B74FBC) of allocated memory: 20
*/
