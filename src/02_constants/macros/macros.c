#include <stdio.h>
#define var 1
#define str "Hello"

#define max(a, b) ((a>b)? a:b)

int main()
{
    printf("The var: %d\n", var);
    printf("The string: %s\n", str);

    #ifdef max
    printf("max is defined\n");
    #endif

    printf("The max value of 2 and 3 is %d\n", max(2,3));

    #undef max                  

    #ifndef max
    printf("max is now undefined\n");         
    #endif

    //max(1, 2);      //gives error as max is undefined 

    printf("date: %s\n",__DATE__);
    printf("time: %s\n",__TIME__);
    printf("file: %s\n",__FILE__);
    printf("line: %d\n",__LINE__);
    printf("ansi: %d\n",__STDC__);        
}

/*
Output:

The var: 1
The string: Hello
max is defined
The max value of 2 and 3 is 3
max is now undefined
date: Oct 20 2024
time: 21:02:35
file: ../src/2_constants/macros/macros.c
line: 29
ansi: 1
*/
