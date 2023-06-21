/*****************************************************************************************************************
 * strcasecmp() Function
 *
 * Syntax:
 * strcasecmp(str1, str2)
 *
 * It takes two strings as input and compares them irrespective of their case sensitivity.
 *
 * If					Returns
 * str1 < str2			Less than 0
 * str1 = str2 			(ignoring case)	0
 * str1 > str2			Greater than 0
*/

#include <stdio.h>
#include <string.h>

int main()
{

	char string1[70] = "STRING";
	char string2[70] = "string";
	int result;

	result = strcasecmp(string1, string2);
	// checking the result using conditional statements.
	if (result == 0)
		printf("Strings are equal.\n");

	else if (result < 0)
		printf("\"%s\" is less than \"%s\".\n", string1, string2);

	else
		printf("\"%s\" is greater than \"%s\".\n", string1, string2);
}