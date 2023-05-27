/*********************************************************************************************************************
 * Input of a String in C
 *
 * Methods to Accept String With Space in C (Cont.)
 *
 * 2. fgets()
 *
 *    To overcome the above-listed limitation, we can use fgets() function. The fgets() function is similar to gets(),
 * but we can also specify a maximum size for the string which will be taken as a string input in C from the user.
 * This means that it reads either the complete line as a string and stores it in the array if the size is less than
 * what is specified as a parameter (say: sz), else it reads only sz characters provided by the user so that no buffer
 * overflow occurs.
 *
 * The syntax for fgets() in C is:
 * char* fgets(char* s, int sz, FILE* stream)
 *
 * Here, s is the pointer which points to the array of characters where the input taken as a string will be stored
 * and returned. The sz variable specifies the maximum allowed size for the user input and stream is used to denote
 * the stream from which the input is to be taken (usually stdin, but it can also be a file).
 *
 *
 *
 */

#include <stdio.h>

int main()
{
	// array to store string taken as input
	char sentence[20];

	// take user input
	printf("Enter any sentence: ");

	// use the fgets method specifying the size of the array as the max limit
	fgets(sentence, 20, stdin);

	// printing the input value
	printf("You entered: %s.", sentence);

	return 0;
}
