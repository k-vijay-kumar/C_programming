/*
 * A single character (alphabets or special characters) can be stored in char data type
 * A group of characters can be stored in "char array data type" (char string_name[number_of_characters])
 * Group of characters/String must be defined in double quotes (" ") and not in single quotes (' ')
 * String should always 
 * String definition must be made during its declaration, if it is hard coded in the program
 *
 */

#include <stdio.h>

int main()
{
	char character;
	character = 'V';

	char string[6] =  "Vijay";

	printf("character V (char): %c\n", character);
	printf("string Vijay (char[6]): %s\n", string);
}

/*
Output:
character V (char): V
string Vijay (char[6]): Vijay
*/

