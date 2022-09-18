/*********************************************************************************************
 * Ternary Operator in C to run one code when the condition is true and another code when the
 * condition is false. It is also called as Conditional Assignment Operator. It can assign the
 * end result to a variable of their respective data type.
 */

#include <stdio.h>
#include <string.h>

int main()
{
	int year;
	char s[25];

	printf("Enter any year: ");
	scanf("%d", &year);

	strcpy(s, (year % 4 == 0 && year % 100 != 0) ? "a Leap year"
			  : (year % 400 == 0)				 ? "a Century Leap year"
												 : "not a Leap year");

	printf("%d is %s", year, s);

	return 0;
}