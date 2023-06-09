/***************************************************************************************************************
 * String comparison by Using String Library Function
 *
 * The string library functions are pre-defined in string.h header file used to do operations on the strings.
 * strcmp() function is used to compare two strings.
 *
 * The strcmp() function takes two strings as input and returns an integer result that can
 * be zero, positive, or negative.
 *
 * The strcmp() function compares both strings characters. If both strings have the same character at the
 * same index till all of the characters have been compared or the pointer reaches the null character '\0'
 * in both strings then we can say that both strings are equal.
 *
 * Syntax of the strcmp() Function:
 * int strcmp (const char* str1, const char* str2);
 *
 * In the syntax above, two arguments, str1 and str2, are passed as strings and the return type is int,
 * indicating that strcmp() gives an integer value.
 *
 * Possible Return Values from the strcmp() Function
 * -------------------------------------------
 * ReturnValue		Description
 * -------------------------------------------
 * 0				Returns 0, When both strings are exactly the same.
 * <0				The function will return a negative number if the ASCII value of a character in the
 * 					first string is smaller than the ASCII value of a character in the second string.
 * >0				The function will return a positive value if a character's ASCII value in the first
 * 					string is bigger than a character's ASCII value in the second string.
 */

#include <stdio.h>
#include <string.h>

int main()
{
	char str1[50]; // declaration of char array
	char str2[50]; // declaration of char array
	int value;	   // declaration of integer variable

	printf("Enter the first string : ");
	scanf("%s", str1);
	printf("Enter the second string : ");
	scanf("%s", str2);

	// comparing both the strings using strcmp() function
	value = strcmp(str1, str2);
	if (value == 0)
		printf("strings are same");
	else
		printf("strings are not same");
	return 0;
}