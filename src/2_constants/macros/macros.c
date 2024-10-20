/*
 * Macro in c is defined by the #define directive. 
 * Macro is a name given to a piece of code, so whenever the compiler encounters a macro in a program, it will replace it with the macro value
 * Macro can be a var, string or function
 *
 * Syntax:
	#define <macro>
	
 * predefined macros :
 * 	   	      __DATE__		//month date year
 *                    __time__		//hr:min:sec
 *                    __FILE__		//path of .c file from pwd	
 *                    __LINE__		//line number of the __LINE__ command in .c file
 *                    __STDC__		//value 1 means that the compiler conforms to ISO Standard C. 
 *

#ifdef <macro>   
	//statements
#endif

- executes the statements if the <macro> is defined


#ifndef <macros>
	//sattements
#endif

- executes statements if the <macro> is not defined



#undef <macro>

- undefines a defined macro

*/

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

    #ifndef m
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
line: 64
ansi: 1
*/
