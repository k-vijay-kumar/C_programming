/*
 * We cannot create a file using read mode
 *
 * When opened using read mode, cursor will be in the beginning of the file
 *
 * We can either read a char using fgetc(file_handler)
 * or a string using fgets(str, no_of_char, file_handler)
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
		exit(0);                     // exit(0) terminates the program and reports a successful status to the operating system
	}
	
	int c;         //fgetc returns int to accomodate the -1 return to indicate end of file (EOF) or error in reading the file
	char str[3];
	
	//To read 2 characters from the file
	int i = 1;
	while(i==1)
	{
		fgets(str, 2, fptr);
		printf("%s", str);
		i++;
	}

	//To read from 3rd character to the end of file char by char
	while( (c = fgetc(fptr)) != EOF)    //EOF = -1 
	{
		printf("%c", c);
	}

	//while(!feof(fptr)) printf("%c", (char)(fgetc(fptr)));  //This would print an -1 as a character at the end of file as the feof will return TRUE only when a read errors due to eof (-1 is read)
	printf(" \n");

	fclose(fptr);
}


/*
Output:
Hi V. Its 2023
*/
