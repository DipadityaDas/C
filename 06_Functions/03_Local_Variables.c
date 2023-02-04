/****************************************************************************************************
 * A Scope in any programming is a region of the program where a defined variable can have its
 * existence and beyond that variable it cannot be accessed. Theare are three places where variables
 * can be declared in C Programming Language.
 * 1. Inside a function or a block which is called local variables.
 * 2. Outside of all functions which is called global variables.
 * 3. In the definition of function parameters which are called formal parameters.
 *
 * Local Variables
 * Variables that are declared inside a function or block are called local variables.
 * They can be used only by statements that are inside that function or block of code.
 * Local variables are not known to functions outside their own.
 */

// Write a program to print all the prime number between 1 and 100.
#include <stdio.h>

void prime()
{
	int c;
	printf("The Prime Number between 1 and 100 are: ");

	for (int j = 1; j <= 100; j++)
	{
		c = 0;
		for (int i = 1; i <= j; i++)
		{
			if (j % i == 0)
				c++;
		}
		if (c == 2)
			printf("%d ", j);
	}
}

int main()
{
	prime();
	return 0;
}