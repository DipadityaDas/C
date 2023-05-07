/*****************************************************************
 * Operators are the foundation of any programming language.
 * We can define operators as symbols that help us to perform specific
 * mathematical and logical computations on operands. In other words,
 * we can say that an operator operates the operands.
 * For example: a = b + c
 * Here, ‘+’ is the operator known as the addition operator and ‘a’ and ‘b’ are operands.
 * Note that b + c = a will not work as assignment always work from right to left.
 * int   *  int      = int
 * int   *  float    = float
 * float *  float    = float
 */

#include <stdio.h>

int main()
{
	int a = 9, b = 4, c;

	// There are Five Binary Arithmetic Operators: + - * / %
	// % is Interger Division which truncates any fractional part.
	c = a + b;
	printf("a+b = %d \n", c);
	c = a - b;
	printf("a-b = %d \n", c);
	c = a * b;
	printf("a*b = %d \n", c);
	c = a / b;
	printf("a/b = %d \n", c);

	// modulus operator only works on integer. +ve numerator -> +ve remainder and -ve numerator -> -ve remainder
	c = a % b;
	printf("Remainder when a divided by b = %d \n", c);

	return 0;
}