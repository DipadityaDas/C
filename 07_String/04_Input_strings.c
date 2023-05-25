/****************************************************************************************************************
 * Input of a String in C
 *
 * Methods to Accept String With Space in C
 * We'll look at four different methods to take a string input in C with spaces(whitespaces).
 *
 * 1. gets()
 *
 * This is a C standard library function. gets() takes a complete line as input and stores it in the string
 * provided as a parameter. The working of gets() is such that it keeps reading the input stream until it
 * encounters a newline character: \n. Hence, even if the string input in C has spaces in it, all of them get
 * included as input until \n doesn't occur.
 *
 * The syntax for gets() in C is:
 *
 * char* gets(char* s)
 *
 * Here, s is the pointer which points to the array of characters where the input taken as a string will be
 * stored and returned. This function will return the string in s when it finishes successfully.
 *
 * gets() seems to be a great method to take string input in C with spaces. But gets() doesn't care about
 * the size of the character array passed to it. This means, in the example, if the user input would be more
 * than 30 characters long, the gets() function would still try to store it in the sentence[] array,
 * but as there is not much available space, this would lead to buffer overflow.
 *
 * Because of this limitation, using the gets() function is not preferable. We will explore other methods
 * in the upcoming sections.
 *
 * Note: The gets() method is no longer a standard function according to the C11 standard ISO/IEC 9899:2011.
 * But it is still available in libraries and will continue to be available for compatibility reasons.
 *
 */

#include <stdio.h>

int main()
{
	// array to store string taken as input
	char sentence[30];

	// take user input
	printf("Enter any sentence: ");

	// use the gets method
	gets(sentence);

	// printing the input value
	printf("You entered: %s.", sentence);

	return 0;
}
