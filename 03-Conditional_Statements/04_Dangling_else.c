/*******************************************************************************************************************************
 * Dangling else in C
 * It explains the association of single else statement in a nested if statement.
 * In nested if statements, when a single “else clause” occurs, the situation happens to be dangling else!
 * For example:
	if (condition)
		if (condition)
			if (condition)
	else
		printf("dangling else!");
 *
 * 1. In such situations, else clause belongs to the closest if statement which is incomplete that is the innermost if statement!
 * 2. However, we can make else clause belong to desired if statement by enclosing all if statements in block outer to which
 * if statement to associate the else clause. For example:

	if (condition) {
		if (condition)
			if (condition)
	} else
		printf("else associates with the outermost if statement!");
 *
 */

#include <stdio.h>

int main()
{
	int x = 11;
	int y = 9;

	if (x < 10)
		if (y > 10)
			printf("*****************");
	else
		printf("#################");
	
	printf("$$$$$$$$$$$$$$$$");

	return 0;
}
