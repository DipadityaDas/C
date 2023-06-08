/****************************************************************************************************************
 * Output a String With Spaces in C
 *
 * 1. using puts()
 *    Another function which we can use to output a string in C is the puts() function.
 *
 * The thing to note however is that after printing the given string in the output, the puts() function transfers
 * the control to the next line. So any other string that we print after the execution of the puts()
 * line will be printed in the next line by default and not in the same line.
 *
 * The complete syntax for this method is:
 * int puts(const char* strptr);
 *
 * Here, strptr is the pointer which points to the array of characters which contains the string which
 * we need to output.
 * 
 */

#include <stdio.h>

int main()
{
	// array that stores first name of the student
	char f_name[20];

	// array that stores last name of the student
	char l_name[20];

	// take user input
	printf("Enter your first name: \n");

	// use fgets to get input
	fgets(f_name, 20, stdin);

	// take user input
	printf("Enter your last name: \n");

	// use fgets to get input
	fgets(l_name, 20, stdin);

	// printing the input value using puts()
	puts(f_name);
	puts(l_name);

	return 0;
}
