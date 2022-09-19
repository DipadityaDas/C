/***********************************************************************************************************************************
 * Loops
 * You may encounter situations, when a block of code needs to be executed several number of times.
 * In general, statements are executed sequentially: The first statement in a function is executed first,
 * followed by the second, and so on.
 * Programming languages provide various control structures that allow for more complicated execution paths.
 *
 * A loop statement allows us to execute a statement or group of statements multiple times.
 *
 * There are three looping statements in C :
 * 1. for Loop
 * 2. while loop
 * 3. do-while loop
 *
 * for loop:-
 * A generic for-loop looks like this:
	for (init_expression; loop_condition; loop_expression)
	{
		program_statements
	}
 *
 * The three expressions inside the round brackets set up the environment for the loop.
 * The init_expression is executed before the loop starts and is typically where you define some initial value
 * that will change each time through the loop.
 * The loop_condition is an expression that determines whether the loop should continue, or stop.
 * Of course if you don't specify a condition under which the loop should stop, it never will,
 * and you will have an endless loop and your program will never terminate.
*/

// C program to print all natural numbers from 1 to n
#include <stdio.h>

int main()
{
	int i, n;

	printf("Enter any number: ");
	scanf("%d", &n);

	printf("Natural numbers from 1 to %d : \n", n);

	for (i = 1; i <= n; i++)
	{
		printf("%d\n", i);
	}

	return 0;
}