/*************************************************************************************************************
 * An expression containing logical operator returns either 0 or 1 depending upon whether
 * expression results true or false. Logical operators are commonly used in decision making in C programming.
 */

#include <stdio.h>

int main()
{
	int a = 5, b = 5, c = 10, result;
	// Logical AND. True only if all operands are true
	result = (a == b) && (c > b);
	printf("(a == b) && (c > b) is %d \n", result);

	result = (a == b) && (c < b);
	printf("(a == b) && (c < b) is %d \n", result);
	// Logical OR. True only if either one operand is true
	result = (a == b) || (c < b);
	printf("(a == b) || (c < b) is %d \n", result);

	result = (a != b) || (c < b);
	printf("(a != b) || (c < b) is %d \n", result);
	// Logical NOT. True only if the operand is 0
	result = !(a != b);
	printf("!(a != b) is %d \n", result);

	result = !(a == b);
	printf("!(a == b) is %d \n", result);

	return 0;
}