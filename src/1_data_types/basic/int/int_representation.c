//All integer values will be stored in 2's complement form in memory
//Signed int data types consider values in 2's complement form
//but Unsigned int data consider values without sign (as it is)

#include <stdio.h>
#include <stdint.h> //The stdint.h header defines integer types, limits of specified width integer types, 
		    //limits of other integer types and macros for integer constant expressions.

int main()
{
	int int_value = -1;
	printf("Value of -1 (int): %d\n", int_value);

	//signed integer type	
	int8_t int8_value = -1;
	printf("Value of -1 (int_8): %d\n", int8_value);

	//unsigned integer types
	uint8_t uint8_value = -1;
	printf("Value of -1 (uint8_t): %d\n", uint8_value);	
}


//Output
//Value of -1 (int): -1
//Value of -1 (int_8): -1
//Value of -1 (uint8_t): 255

//Reason for 255 in uint8_t
//-1 is stored in memory in 2's complement form
//Lets find 2's complement form of -1
//step1: 1's complement of 1 (0000_0001): 	1111_1110  	
//#1's complement is obtained by inverting the bits
//step2: Add 1 to get 2's complement of 1:	1111_1111

//-1 is stored in memory as 1111_1111
//Unsigned int data types convert this to decimal and print it
//But signed it data types find its 2's complement and then convert it into decimal
