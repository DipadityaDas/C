/******************************************************************************************************************
 * Fall through in C
 * Fall through is a type of error that occurs in various programming languages like C, C++, Java, Dart …etc.
 * It occurs in switch-case statements where when we forget to add a break statement and in that case flow of control
 * jumps to the next line. Due to this when any case is matched with the specified value then control falls through
 * to subsequent cases until a break statement is found. In C++, the error is not found on fallthrough but in
 * languages like Dart, an error occurs whenever a fallthrough occurs.
 *
 * It is not always necessary to avoid fallthrough, but it can be used as an advantage as well.
 */

#include <stdio.h>
int main()
{
	int number = 5;
	switch (number)
	{
	case 1:
	case 2:
	case 3:
		printf("One, Two, or Three.\n");
		break;
	case 4:
	case 5:
	case 6:
		printf("Four, Five, or Six.\n");
		break;
	default:
		printf("Greater than Six.\n");
	}
}