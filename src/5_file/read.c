/*
 * We cannot create a file using read mode
 *
 * When opened using read mode, cursor will be in the beginning of the file
 *
 * We can either read a char using fgetc(file_handler)
 * or a string using fgets(str, no_of_char, file_handler)
 * All the values can be read using while(!feof(file_handler)) loop
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
	
	int c;         //fgetc returns int
	char str[3];
	
	//To read 2 characters from the file
	int i = 1;
	while(i==1)
	{
		fgets(str, 2, fptr);
		printf("%s", str);
		i++;
	}

	//To read from 3 character to the end of file char by char
	while( (c = fgetc(fptr)) != EOF)
	{
		printf("%c", c);
	}

	fclose(fptr);
}


/*
Output:
Hi V. Its 2023
*/
