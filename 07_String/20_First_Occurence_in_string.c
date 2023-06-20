/***************************************************************************************************************
 * strstr() Function
 *
 * Syntax:
 * char *strstr(char *str, char *srch_term)
 *
 * It takes two strings as input and finds out the first occurrence of the second string in the first string.
 * It will return a pointer that points to the start of the first occurrence of the second string in the first
 * string and a Null if the second string is not present in the first string.
 *
 */

#include <stdio.h>
#include <string.h>

int main()
{
	char string1[70] = "You are reading string functions.";
	printf("Output string is: %s", strstr(string1, "string"));

	return 0;
}