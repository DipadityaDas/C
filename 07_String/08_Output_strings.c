/*****************************************************************************************************************
 * Output a String Without Spaces in C
 *
 * 2. using fputs()
 *    The fputs() function can be used to output two strings in C without space in between as it does not transfer
 * the control to a new line so that even if another string is printed after it, both of them will be on the same
 * line.
 *
 * The complete syntax for this method is:
 * int fputs(const char* strptr, FILE* stream);
 *
 * Here, s is the pointer which points to the array of characters which contains the string which we need to output.
 *
 */

#include <stdio.h>

int main()
{
	// char array that stores complete name of the student
	char name[50];

	// take user input
	printf("Enter your full name: \n");

	// use gets() to take input with spaces
	gets(name);

	// char array that stores city of the student
	char city_name[30];

	// take user input
	printf("Enter your city name: \n");

	// use scanf to take input without spaces
	scanf("%s", city_name);

	// print name with space using printf
	printf("Your name is %s \n", name);

	printf("You live in ");

	// print city using fputs
	fputs(city_name, stdout);

	return 0;
}
