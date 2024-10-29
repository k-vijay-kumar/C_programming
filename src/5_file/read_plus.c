/*
 * We cannot create a file using read_plus mode
 *
 * When opened using read_plus mode, cursor will be in the beginning of the file
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
	fptr = fopen("w_file.txt", "r+");

	//printing error if not able to open the file
	if(fptr == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	
	int c;                         //fgetc returns int
	char str[3];
	
	//To read 2 characters from the file
	int i = 1;
	while(i==1)
	{
		fgets(str, 2, fptr);
		printf("%s", str);
		i++;
	}

	//To read from 3 character to the end of file as a string of 2 char each
	while( (c = fgetc(fptr)) != EOF)
	{
		printf("%c", c);
	}

	char str1[4] = "Hi ";
	char ch = 'V';

	//writing string "Hi" to file
	fputs(str1, fptr);

	//writing char 'V' to file
	fputc(ch, fptr);

	char str2[6] = ". Its";
	int num = 2023;

	//writing int to a file
	fprintf(fptr, "%s %d\n", str2, num);

	fclose(fptr);
}


/*
Output:
Reads after executing write.c and append.c:
Hi V. Its 2023

Content in file after appending:
Hi V. Its 2023
Hi V. Its 2023
*/
