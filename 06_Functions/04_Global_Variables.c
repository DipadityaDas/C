/***************************************************************************************************
 * Global Variables in C Programming Language
 * Global variables are defined outside a function, usually on top of the program.
 * Global variables hold their values throughout the lifetime of your program and
 * they can be accessed inside any of the functions defined for the program.
 *
 * A global variable can be accessed by any function.
 * That is, a global variable is available for use throughout your entire program after its declaration.
 *
 * A program can have same name for local and global variables but the value of local variable
 * inside a function will take preference.
 */

#include <stdio.h>

/* global variable declaration */
int perimeter;

void rectangle()
{
	/* local variable declaration */
	int length, breadth;

	/* actual initialization */
	length = 10;
	breadth = 20;
	perimeter = 2 * (length + breadth);

	printf("Length = %d\nBreadth = %d\nPerimeter of a Rectangle = %d\n\n", length, breadth, perimeter);
}

void square()
{
	/* local variable declaration */
	int side, perimeter;

	/* actual initialization */
	perimeter = 0;
	side = 10;

	perimeter = 4 * side; 

	/* local perimeter variable will be printed as local variable has higher preference than Global in local scope */
	printf("Side = %d\nPerimeter of a Square = %d\n\n", side, perimeter);
}

int main()
{
	rectangle();
	square();
	return 0;
}