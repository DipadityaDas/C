/***********************************************************************************************************************
 * do...while loop
 * do...while is an exit controlled looping statement. We use do...while loop when there is a need to check condition 
 * after execution of loop body. do...while loop in any case executes minimum once.
 * Looping statements whose condition is checked after execution of its loop body is called as Exit controlled loop.
 * 
 * We use do...while loop if we need to execute loop body minimum once. For example - consider a program to validate 
 * user input and run in loop until user feeds valid input. In this case the input statement should run minimum once 
 * and should repeat in loop until user provides valid input.
 * 
 * Syntax of do...while loop:
	do
	{
		// Body of do while loop
	} while (condition);
 * How do...while loop works?
 * do...while loop works in two step.
 * 1. Initially program control transfers to body of loop. It executes all statements inside loop body and transfers
 *    control to loop condition.
 * 2. Loop condition contains set of relational and logical expressions. If conditional expression evaluates 1 (true)
 *    then loop repeats again otherwise if conditional expression evaluates 0 (false) loop terminates.
 * The above two steps are repeated until loop condition is met.
 */ 

// C program to print all Perfect numbers between 1 to n

#include <stdio.h>

int main()
{
	int i, j, end, sum;

	printf("Enter upper limit: ");
	scanf("%d", &end);

	printf("All Perfect numbers between 1 to %d:\n", end);

	i = 1;
	do
	{
		sum = 0;

		for (j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				sum += j;
			}
		}

		if (sum == i)
		{
			printf("%d, ", i);
		}

		i++;
	} while (i <= end);

	return 0;
}