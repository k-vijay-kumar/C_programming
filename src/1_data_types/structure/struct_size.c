/*
 * Structure size calculation uses structure padding
 * Each members of structure uses some extra empty bytes of memory, 
 * so that the members are aligned in memory
 * Requirement:
 * 8 byte system means, 8 bytes of memory can be accessed in a single cycle operation
 * If members are misaligned, i.e., if they are stored in memory locations which are of 2 addressable loaction, 
 * then to access that member, we need 2 cycle operation (latency)
 *
 */

#include <stdio.h>

int main()
{
	//Considering 64 bit(8 byte) system
	
	struct my_d_type
	{
		char initial;
		int dob;
		int yob;
	};

	struct my_d_type var;
	printf("Size of struct my_d_type data type is %ld bytes\n", sizeof(var));
}

/*
Output
Size of struct my_d_type data type is 12 bytes

Here, memory allocation takes place in the order of member declaration in struct
First, initial variable takes 1 byte of memory
Then, dob takes 4 bytes of memory
Now since already 5 bytes of memory is allocated, In this addressable loccation only 3 bytes are remaining.
So, the yob is allocated memory of 4 bytes in next addressable location

Hence, this struct my_d_type uses 2 addressable locations which has 12 (8*2) bytes of memory
*/

