/**********************************************************************************************************
 * A type cast is basically a conversion from one type to another.
 * There are two types of type conversion:
 * 1. Implicit type casting -
 *    Done by the compiler on its own, without any external trigger from the user.
 * 	  Generally takes place when in an expression more than one data type is present.
 * 	  In such condition type conversion (type promotion) takes place to avoid loss of data.
 * 	  All the data types of the variables are upgraded to the data type of the variable with largest data type.
 * bool -> char -> short int -> int -> unsigned int -> long -> unsigned -> long long -> float -> double -> long double
 * 	  It is possible for implicit conversions to lose information, signs can be lost (when signed is implicitly
 * 	  converted to unsigned), and overflow can occur (when long long is implicitly converted to float).
 *
 * 2. Explicit Type Conversion -
 *    This process is also called type casting and it is user defined.
 * 	  Here the user can type cast the result to make it of a particular data type.
 * 	  The syntax in C -> (type) expression
 *
 * Advantages of Type Conversion
 * - This is done to take advantage of certain features of type hierarchies or type representations.
 * - It helps us to compute expressions containing variables of different data types.
 */

#include <stdio.h>

int main()
{
	int x = 10;
	char y = 'a';

	// y implicitly converted to int. ASCII
	// value of 'a' is 97
	x = x + y;

	// x is implicitly converted to float
	float z = x + 1.0;

	printf("x = %d, z = %f", x, z);

	// Explicit conversion from double to int
	double a = 6.5;

	int sum = (int)a + 1;

	printf("Sum = %d", sum);

	return 0;
}