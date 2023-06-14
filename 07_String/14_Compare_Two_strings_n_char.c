/***************************************************************************************************************
 * strncmp() Function
 *
 * Syntax
 * int strncmp(const char *str1, const char *str2, size_t n)
 *
 * size_t is for long unsigned int.
 *
 * It compares only the first n characters of both the strings and returns an integer value accordingly:
 *
 * Expression													Returns
 * string 1(first n characters) > string 2(first n characters)		Positive integer
 * string 1(first n characters) < string 2(first n characters)		Negative
 * string 1(first n characters) = string 2(first n characters)		Zero
 *
 */

#include <stdio.h>
#include <string.h>

int main()
{
	char s1[20] = "DipadityaDas";
	char s2[20] = "DipadityaDas.COM";

	/* it only compares first 5 characters of both strings*/
	if (strncmp(s1, s2, 5) == 0)
	{
		printf("string 1 and string 2 are equal");
	}
	else
	{
		printf("string 1 and 2 are different");
	}

	return 0;
}
