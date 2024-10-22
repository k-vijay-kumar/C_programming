/*
 * ftell is used to tell the current pos of the cursor in the file
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

	char c;
	char str[5];
	
	//To read 2 characters from the file
	int i = 1;
	while(i<3)
	{
		c = fgetc(fptr);
		printf("%c", c);
		i++;
	}

	printf("\nPos after reading 2 char: %ld\n", ftell(fptr));

	//To read from 3 character to the end of file as a string of 2 char each
	while(!feof(fptr))
	{
		fgets(str, 2, fptr);
		printf("%s", str);
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

Pos after reading entire file: 15
*/
