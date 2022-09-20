/********************************************************************************************************************
 * while loop
 * while loop is an entry controlled looping construct. We use while loop to repeat set of statements when number 
 * of iterations are not known prior to its execution. It provides flexibility to define loop without initialization 
 * and update parts (present in for loop).
 * 
 * Syntax of while loop
	while(condition) 
	{
		// Body of while loop
	}
 * 
 * while loop works in two steps:
 * 1. Initially program control is received by condition block. It contains set of relational and logical expressions.
 *    If result of the conditional expression is 1 (true) then while transfers program control to body of loop. 
 *    Else if result of conditional expression is 0 (false) then it exits from loop.
 * 2. Body of loop contain single or set of statements to repeat. It execute all statements inside its body and 
 *    transfer the program control to loop condition block.
 * Step 1 and 2 are repeated until the loop condition is met.
 * 
 * The above two steps are repeated, until loop condition is true.
 */ 

// C program to print all alphabets using while loop

#include <stdio.h>

int main()
{
	char ch = 'a';

	printf("Alphabets from a - z are: \n");

	while (ch <= 'z')
	{
		printf("%c\n", ch);
		ch++;
	}

	return 0;
}