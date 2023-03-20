/*****************************************************************************************
 * Actual and Formal Parameters in C Programming language
 *
 * An actual parameter is the value of a function that is passed when the function
 * is being invoked. The caller will assign the actual value.
 * It is a parameter that is determined while inviting a subroutine or calling a function.
 *
 * Formal parameters, are treated as local variables with-in a function and they take
 * precedence over global variables. A formal parameter is defined while determining
 * the subroutine or within the definition of a function.
 * Formal parameters are also used in the header of the function.
 */

#include <stdio.h>

int sum(int, int);

/* global variable declaration */
int a = 20;

int main()
{

	/* local variable declaration in main function */
	int a = 10;
	int b = 20;
	int c = 0;

	printf("value of a in main() = %d\n", a);
	c = sum(a, b); // Actual Parameters
	printf("value of c in main() = %d\n", c);

	return 0;
}

/* function to add two integers */
int sum(int a, int b) // Formal Parameters
{

	printf("value of a in sum() = %d\n", a);
	printf("value of b in sum() = %d\n", b);

	return a + b;
}