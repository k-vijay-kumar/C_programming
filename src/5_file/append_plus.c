/*
 * While openning a file using append_plus mode, the cursor will be at the end of the file
 *
 * If not present, a file can be created 
 *
 * We can either append a char using fputc(char, file_handler)
 * or a string using fputs(string, file_handler)
 * or any value using fprintf(file_handler, "value to be written. Format specifier if needed", variable);
 *
 * We can also read. We also can read the already present data
 */

#include <stdio.h>
#include <stdlib.h>  //to support exit(0)

int main()
{
	//Creating handle to a file
	FILE* fptr = NULL;

	//Openning the file
	fptr = fopen("w_file.txt", "a+");

	//printing error if not able to open the file
	if(fptr == NULL)
	{
		printf("Error\n");
		exit(0);
	}

	char str1[3] = "Hi ";
	char ch = 'V';

	//writing string "Hi" to file
	fputs(str1, fptr);

	//writing char 'V' to file
	fputc(ch, fptr);

	char str2[6] = ". Its";
	int num = 2023;

	//writing int to a file
	fprintf(fptr, "%s %d\n", str2, num);

	//to move cursor to beginning of the file
	rewind(fptr);

	char c;
	char str[5];
	
	//To read 2 characters from the file
	int i = 1;
	while(i>2)
	{
		c = fgetc(fptr);
		printf("%c", c);
		i++;
	}

	//To read from 3 character to the end of file as a string of 2 char each
	while(!feof(fptr))
	{
		fgets(str, 2, fptr);
		printf("%s", str);
	}


	//closing the file
	fclose(fptr);
}


/*
Output in the file after 2 execution:
Hi V. Its 2023
Hi V. Its 2023
Output in console (read value):
Hi V. Its 2023
Hi V. Its 2023

*/
