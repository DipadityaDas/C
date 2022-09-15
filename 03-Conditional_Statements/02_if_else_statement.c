/****************************************************************************************************
 * The if-else is statement is an extended version of If. The general form of if-else is as follows:
	if (test-expression)
	{
		True block of statements
	}
	Else
	{
		False block of statements
	}
	Statements;
 *
 * If the value of test-expression is true, then the true block of statements will be executed.
 * If the value of test-expression if false, then the false block of statements will be executed.
 * In any case, after the execution, the control will be automatically transferred to the statements
 * appearing outside the block of If.
 */

#include <stdio.h>

int main()
{
	int number = 19;

	if (number < 10) // Test Condition
	{
		printf("The value is less than 10. \n");
	}
	else
	{
		printf("The value is greater than 10. \n");
	}

	printf("Happy Coding \n");

	return 0;
}
