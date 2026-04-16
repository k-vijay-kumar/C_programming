/* 
 * Structure size calculation uses structure padding
 * Each members of structure uses some extra empty bytes of memory, so that the members are aligned in memory
 * Requirement:
 * 4 byte system means, 4 bytes of memory can be accessed in a single cycle operation
 * If members are misaligned, i.e., if they are stored in memory locations which are of 2 addressable loaction, 
 * then to access that member, we need 2 cycle operation (latency)
 */

#include <stdio.h>

int main()
{
	//Considering 32 bit(4 byte) taget architecture of compiler
	
	struct my_d_type
	{
		char initial;
		int dob;
		int yob;
	};

	struct my_d_type var;
	printf("Size of struct my_d_type data type is %u bytes\n", sizeof(var));
}

/*
Output
Size of struct my_d_type data type is 12 bytes

Here, memory allocation takes place in the order of member declaration in struct
First, initial variable takes 1 byte of memory
Then, dob takes 4 bytes of memory but it is stored in next addressable location (i.e., 4 byte aligned location) as per the structure padding. 
So, 3 bytes of memory are empty between initial and dob
Then, yob takes 4 bytes of memory and it is stored in next addressable location (i.e., 4 byte aligned location) as per the structure padding.

Hence, this struct my_d_type uses 3 addressable locations which has 12 (4*3) bytes of memory
*/

