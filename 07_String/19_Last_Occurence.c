/*******************************************************************************************************************
 * strrchr() Function
 *
 * Syntax
 * char *strrchr(char *str, int ch)
 *
 * It takes a string and a character as input and finds out the last occurrence of a given character in that string.
 * It will return the pointer to the last occurrence of that character if found otherwise, return Null.
 */

#include <stdio.h>
#include <string.h>

int main()
{
	char string1[30] = "I love to write blogs.";
	printf("%s", strrchr(string1, 'w'));

	return 0;
}