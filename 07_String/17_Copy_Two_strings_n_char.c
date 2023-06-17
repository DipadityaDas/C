/******************************************************************************************************************
 * strncpy() Function
 *
 * Syntax:
 * char *strncpy( char *str1, char *str2, size_t n)
 *
 * size_t is long unsigned int and n is an integer.
 *
 * It takes two strings as input and overwrites the data of the first string by the second string based on specific
 * conditions:
 * If the length of string2 is greater than n, it copies only the first n characters of string2 to string1;
 * otherwise, it copies the entire string2 to string1.
 *
 */

#include <stdio.h>
#include <string.h>

int main()
{
	char string1[30] = "string 1";
	char string2[40] = "Only 12 characters will be copied.";

	strncpy(string1, string2, 12);
	printf("String s1 is: %s", string1);

	return 0;
}