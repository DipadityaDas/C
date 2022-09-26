/*****************************************************************************************************************************
 * continue statement in C
 * continue is a jump statement used inside loop. It skips loop body and continues to next iteration.
 * continue statement on execution immediately transfers program control from loop body to next part of the loop.
 * It works opposite of break statement. In case of nested loops, it continues to nearest loop.
 */

// Write a C program to print even numbers between 1 to 100

#include <stdio.h>

int main()
{
	int num;

	printf("Even Numbers between 1 to 100: \n");

	for (num = 0; num <= 100; num++)
	{
		if (num % 2 == 1)
		{
			continue;
		}
		printf("%d ", num);
	}

	return 0;
}