/*
 * A single character (alphabets or special characters) can be stored in char data type
 * A group of characters can be stored in "char array data type" (char string_name[number_of_characters])
 * String definition must be made during its declaration, if it is hard coded in the program
 *
 */

#include <stdio.h>

int main()
{
	char character;
	character = 'V';

	char string[3] =  "VVK";

	printf("character V (char): %c\n", character);
	printf("string VVK (char[3]): %s\n", string);
}

/*
Output:
character V (char): V
string VVK (char[3]): VVK
*/

