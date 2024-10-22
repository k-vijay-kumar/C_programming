/*
 * fseek is used to place the cursor at required position
 *
 * fseek(filehandler, distance, initial_pos);
 * Here,
 * initial_pos can be SEEK_SET or SEEK_CUR or SEEK_END
 * SEEK_SET is from beginning of file
 * SEEK_CUR is from current location
 * SEEK_END is from end of file
 * distance is the position where you want to place the cursor from the initial_pos
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

	//setting cursor at 2 pos from beginnin
	fseek(fptr, 2, SEEK_SET);
	
	//reading entire file from current pos
	while(!feof(fptr))
	{
		char c = fgetc(fptr);
		printf("%c", c);
	}

	printf("\n");

	//placing cursor at beginning of file
	rewind(fptr);

	//setting cursor at 2 pos from current pos
	fseek(fptr, 2, SEEK_CUR);
	
	//reading entire file from current pos
	while(!feof(fptr))
	{
		char c = fgetc(fptr);
		printf("%c", c);
	}

	printf("\n");

	//setting cursor at 5 pos before end
	fseek(fptr, -5, SEEK_END);
	
	//reading entire file from current pos
	while(!feof(fptr))
	{
		char c = fgetc(fptr);
		printf("%c", c);
	}
	
	printf("\n");

	fclose(fptr);
}


/*
File has:
Hi V. Its 2023

Output:
 V. Its 2023
�
 V. Its 2023
�
2023
�
*/
