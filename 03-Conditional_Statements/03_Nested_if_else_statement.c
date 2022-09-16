/*******************************************************************************************************
 * Nested if-else Statements
 * When a series of decision is required, nested if-else is used. Nesting means using one if-else
 * construct within another one.
 *
 * NOTE: In nested if-else, we have to be careful with the indentation because multiple if-else
 * constructs are involved in this process, so it becomes difficult to figure out individual constructs.
 * Proper indentation makes it easy to read the program.
 */

#include <stdio.h>

int main()
{
	int num = 1;
	
	if (num < 10)
	{
		if (num == 1)
		{
			printf("The value is: %d \n", num);
		}
		else
		{
			printf("The value is greater than 1. \n");
		}
	}
	else
	{
		printf("The value is greater than 10. \n");
	}

	return 0;
}