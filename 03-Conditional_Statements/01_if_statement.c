/*************************************************************************************************************
 * Conditional Statements in C programming are used to make decisions based on the conditions.
 * Conditional statements execute sequentially when there is no condition around the statements.
 * If you put some condition for a block of statements, the execution flow may change based on
 * the result evaluated by the condition. This process is called decision making in ‘C.’
 * In ‘C’ programming conditional statements are possible with the help of the following two constructs:
 * 1. if / if-else / Nested if-else / Nested else-if statement
 * 2. switch...case
 * 3. Ternary Operator
 *
 * It is also called as branching as a program decides which statement to execute based on the result
 * of the evaluated condition.
 *
 * if statement
 * It is one of the powerful conditional statement. If statement is responsible for modifying the flow
 * of execution of a program. If statement is always used with a condition. The condition is evaluated
 * first before executing any statement inside the body of if. The syntax for if statement is as follows:
	if (condition)
		instruction;
 * The condition evaluates to either true or false.
 * True is always a non-zero value, and false is a value that contains zero.
 * Instructions can be a single instruction or a code block enclosed by curly braces { }.
 */

#include <stdio.h>

int main()
{
	int num1 = 45;
	int num2 = 100;

	if (num1 < num2) // Test condition
	{
		printf("Number 2 is greater than Number 1.");
	}

	return 0;
}