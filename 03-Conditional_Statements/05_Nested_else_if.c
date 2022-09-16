/*****************************************************************************************************************
 * Nested Else-if statements
 * Nested else-if is used when multipath decisions are required.
 *
 * The general syntax of how else-if ladders are constructed in ‘C’ programming is as follows:
	if (test - expression 1) {
		statement1;
	} else if (test - expression 2) {
		Statement2;
	} else if (test - expression 3) {
		Statement3;
	} else if (test - expression n) {
		Statement n;
	} else {
		default;
	}
	Statement x;
 * This type of structure is known as the else-if ladder.
 * This chain generally looks like a ladder hence it is also called as an else-if ladder.
 * The test-expressions are evaluated from top to bottom.
 * Whenever a true test-expression if found, statement associated with it is executed.
 * When all the n test-expressions becomes false, then the default else statement is executed.
 */

#include <stdio.h>

int main()
{
	int marks = 83;
	if (marks > 75)
	{
		printf("First class");
	}
	else if (marks > 65)
	{
		printf("Second class");
	}
	else if (marks > 55)
	{
		printf("Third class");
	}
	else
	{
		printf("Fourth class");
	}
	return 0;
}