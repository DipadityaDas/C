/*****************************************************************************************************************
 * strncasecmp() Function
 *
 * Syntax
 * strncasecmp(str1, str2, n)
 *
 * It takes two strings as input and compares them till n characters irrespective of their case sensitivity.
 *
*/

#include <stdio.h>
#include <string.h>

int main()
{

	char string1[70] = "STRING";
	char string2[70] = "steing";
	int result;

	result = strncasecmp(string1, string2, 3);
	// checking the result using conditional statements.

	if (result == 0)
		printf("Strings are equal.\n");

	else if (result < 0)
		printf("\"%s\" is less than \"%s\".\n", string1, string2);

	else
		printf("\"%s\" is greater than \"%s\".\n", string1, string2);

	return 0;
}