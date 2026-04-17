/*
 * While openning a file using append mode, the cursor will be at the end of the file
 *
 * If not present, a file can be created 
 *
 * We can only write using this mode
 * 
 * We can either append a char using fputc(char, file_handler)
 * or a string using fputs(string, file_handler)
 * or any value using fprintf(file_handler, "value to be written. Format specifier if needed", variable);
 *
 * difference between write and append is that, the cursor will be at the beginning of the file wile openning a file using write mode. 
 * Whereas in append mode, it will be in end of the file
 */

#include <stdio.h>
#include <stdlib.h>  //to support exit(0)

int main()
{
	//Creating handle to a file
	FILE* fptr = NULL;

	//Openning the file
	fptr = fopen("w_file.txt", "a");

	//printing error if not able to open the file
	if(fptr == NULL)
	{
		printf("Error\n");
		exit(0);
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
	fprintf(fptr, "%s %d", str2, num);

	//Place the cursor at the next line
	fputs("\n", fptr);

	//closing the file
	fclose(fptr);
}


/*
Output in the file after executing the above program for 2 times:
Hi V. Its 2023
Hi V. Its 2023
*/
