/*
 * ftell is used to tell the current pos of the cursor in the file
 *
 * On Unix/Linux, a newline is stored as a single LF character (hex 0x0A), so ftell() increments by 1 byte.
 * On Windows, a newline is stored as two characters, CRLF (hex 0x0D 0x0A), so ftell() increments by 2 bytes.
 * 
 */

#include <stdio.h>
#include <stdlib.h>  //to support exit(0)

int main()
{
	//Creating handle to a file
	FILE* fptr = NULL;

	//Openning the file
	fptr = fopen("w_file.txt", "r");

	//printing error if not able to open the file
	if(fptr == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	
	printf("Starting pos: %ld\n", ftell(fptr));

	int  c;
	
	//To read 2 characters from the file
	int i = 1;
	while(i<3)
	{
		c = fgetc(fptr);
		printf("%c", c);
		i++;
	}

	printf("\nPos after reading 2 char: %ld\n", ftell(fptr));

	//To read from 3 character to the end of file
	while((c = fgetc(fptr)) != -1)
	{
		printf("%c", c);
	}
	
	printf("Pos after reading entire file: %ld\n", ftell(fptr));

	fclose(fptr);
}


/*
Output:
Starting pos: 0
Hi
Pos after reading 2 char: 2
 V. Its 2023
Pos after reading entire file: 14
*/
