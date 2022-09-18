/*********************************************************************************************
 * Ternary Operator in C to run one code when the condition is true and another code when the
 * condition is false. It is also called as Conditional Assignment Operator. It can assign the
 * end result to a variable of their respective data type.
 */

#include <stdio.h>

int main()
{
	int a, b, c;

	printf("Enter the value of a : ");
	scanf("%d", &a);

	printf("Enter the value of b : ");
	scanf("%d", &b);

	c = (a < b) ? a : b;
	printf("The Greater number between a and b : %d \n", c);

	return 0;
}