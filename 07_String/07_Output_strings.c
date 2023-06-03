/************************************************************************************************************************
 * Output a String Without Spaces in C
 *
 * 1. using printf()
 *    If we want to do a string output in C stored in memory and we want to output it as it is,
 * then we can use the printf() function. This function, like scanf() uses the access specifier %s to output strings.
 *
 * The complete syntax for this method is:
 * printf("%s", char *s);
 *
 * Here, s is the pointer which points to the array of characters which contains the string which we need to output.
 *
*/

#include <stdio.h>

int main()
{
	// array that stores the string which we need to output
	char sentence[20];

	// take user input
	printf("Enter any sentence: ");

	// use fgets to take the input
	fgets(sentence, 20, stdin);

	// printing the input value using printf
	printf("You entered: %s.", sentence);

	return 0;
}
