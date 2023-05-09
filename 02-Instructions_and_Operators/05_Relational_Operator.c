/*******************************************************************************************************************
 * A relational operator checks the relationship between two operands.
 * If the relation is true, it returns 1.
 * If the relation is false, it returns value 0.
 */

#include <stdio.h>

int main()
{
	int a = 5, b = 5, c = 10;
	// Equal to (==)
	printf("%d == %d is %d \n", a, b, a == b);
	printf("%d == %d is %d \n", a, c, a == c);
	// Greater than (>)
	printf("%d > %d is %d \n", a, b, a > b);
	printf("%d > %d is %d \n", a, c, a > c);
	// Less than (<)
	printf("%d < %d is %d \n", a, b, a < b);
	printf("%d < %d is %d \n", a, c, a < c);
	// Not equal to (!=)
	printf("%d != %d is %d \n", a, b, a != b);
	printf("%d != %d is %d \n", a, c, a != c);
	// Greater than or equal to (>=)
	printf("%d >= %d is %d \n", a, b, a >= b);
	printf("%d >= %d is %d \n", a, c, a >= c);
	// Less than or equal to (<=)
	printf("%d <= %d is %d \n", a, b, a <= b);
	printf("%d <= %d is %d \n", a, c, a <= c);

	return 0;
}