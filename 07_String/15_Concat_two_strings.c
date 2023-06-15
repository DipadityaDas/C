/****************************************************************************************************************
 * strcat() function
 *
 * Syntax
 * char *strcat(char *str1, char *str2)
 *
 * It takes two strings as input and concatenates the second string to the first string, which means it will
 * attach the second string to the end of the first string and save the concatenated string to the first string.
 * The size of the first string should be large enough to save the result.
 *
 */

#include <stdio.h>
#include <string.h>

int main()
{

	char string1[10] = "Hello";
	char string2[10] = "World";

	strcat(string1, string2);
	printf("Output string after concatenation: %s", string1);

	return 0;
}
