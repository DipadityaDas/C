/******************************************************************************************************************
 * strchr() Function
 *
 * Syntax
 * char *strchr(char *str, int ch)
 *
 * It takes a string and a character as input and finds out the first occurrence of the given character in that
 * string. It will return the pointer to the first occurrence of that character; if found otherwise, return Null.
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char string1[30] = "I love to write.";
	printf("%s", strchr(string1, 'w'));

	return 0;
}