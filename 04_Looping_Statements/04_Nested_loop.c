/****************************************************************************************************************************
 * C programming language supports nesting of one loop inside another. We can define any number of loop inside another loop.
 * We can also have any number of nesting level.
 * Syntax of nested loop:
	outer_loop
	{
		inner_loop
		{
			// Inner loop statement/s
		}
		// Outer loop statement/s
	}
 * outer_loop and inner_loop is one of the valid C loop i.e. either for loop or while loop or do...while loop.
 */

// Write a C program to print multiplication table from 1 to 5.
#include <stdio.h>

int main()
{
	int i, j;

	/* Outer loop */
	for (i = 1; i <= 10; i++)
	{
		/* Inner loop */
		for (j = 1; j <= 5; j++)
		{
			printf("%d\t", (i * j));
		}

		/* Print a new line */
		printf("\n");
	}

	return 0;
}