/*
 * While openning a file using write+ mode, the cursor will be at the begininng of the file
 * If file is not present, It can be created
 *
 * When openning file, It clears all data in the file
 * and writes the data written to it into the file.
 *
 * We can either write a char using fputc(char, file_handler)
 * or a string using fputs(string, file_handler)
 * or any value using fprintf(file_handler, "value to be written. Format specifier if needed", variable);
 *
 * We can also read using write_plus mode
 */

#include <stdio.h>
#include <stdlib.h>  //to support exit(0)

int main()
{
	//Creating handle to a file
	FILE* fptr = NULL;

	//Openning the file
	fptr = fopen("w_file.txt", "w+");

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

	//TO bring the cursor to the beginning of the file
	rewind(fptr);

	//Reading from te file
	char c;
	while(!feof(fptr))
	{
		c = fgetc(fptr);
		printf("%c", c);
	}

	//closing the file
	fclose(fptr);
}


/*
Output in the file:
Hi V. Its 2023
�
*/
