/*****************************************************************************************************************
 * strncat() Function
 *
 * Syntax
 * char *strncat(char *str1, char *str2, int n)
 *
 * It takes two strings as input and attaches only the first n characters of the second string to the end of the
 * first string.
*/

#include <stdio.h>
#include <string.h>

int main()
{

	char s1[35] = "string 1";					 // string1
	char s2[35] = "I'll be copied to string 1."; // string2
	strcpy(s1, s2);								 // copying string2 to string1
	printf("String s1 is: %s", s1);				 // printing string1

	return 0;
}