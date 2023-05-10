/**********************************************************************************************************
 * During computation, mathematical operations like: addition, subtraction, multiplication, division, etc
 * are converted to bit-level which makes processing faster and saves power.
 * Bitwise operators are used in C programming to perform bit-level operations.
 * Operators	    Meaning of operators
 *      &            	Bitwise AND
 *      |	            Bitwise OR
 *      ^	            Bitwise exclusive OR
 *      ~	            Bitwise complement
 *      <<          	Shift left
 *      >>          	Shift right
 */

#include <stdio.h>

int main()
{
	int a = 12, b = 25;

	/* Bitwise AND
	 * The output of bitwise AND is 1 if the corresponding bits of two operands is 1.
	 * If either bit of an operand is 0, the result of corresponding bit is evaluated to 0.
	 * Bit Operation of 12 and 25
	 *      00001100
	 *  &   00011001
	 *  -------------
	 *      00001000    =   8 (In decimal)
	 */
	printf("Output of a & b = %d \n", a & b);

	/* Bitwise OR
	 * The output of bitwise OR is 1 if at least one corresponding bit of two operands is 1.
	 * In C Programming, bitwise OR operator is denoted by |.
	 * Bitwise OR Operation of 12 and 25
	 *      00001100
	 *  |   00011001
	 * --------------
	 *      00011101  = 29 (In decimal)
	 */
	printf("Output of a | b = %d \n", a | b);

	/* Bitwise XOR (exclusive OR)
	 * The result of bitwise XOR operator is 1 if the corresponding bits of two operands are opposite.
	 * In C programming ,it is denoted by ^.
	 * Bitwise XOR Operation of 12 and 25
	 *      00001100
	 *  ^   00011001
	 * --------------
	 *      00010101  = 21 (In decimal)
	 */
	printf("Output of a ^ b = %d \n", a ^ b);

	/* Bitwise NOT (Complement)
	 * Bitwise complement operator is a unary operator (works on only one operand).
	 * It changes 1 to 0 and 0 to 1. It is denoted by ~.
	 * Bitwise complement Operation of 25
	 *      ~ 00011001 ->  11100110  = -26 (In decimal)
	 */
	printf("Output of ~b = %d \n", ~b);

	/* Right Shift Operator
	 * Right shift operator shifts all bits towards right by certain number of specified bits. It is denoted by >>.
	 * 212 = 11010100 (In binary)
	 * 212>>2 = 00110101 (In binary) [Right shift by two bits]
	 * 212>>7 = 00000001 (In binary)
	 * 212>>8 = 00000000
	 * 212>>0 = 11010100 (No Shift)
	 *
	 * Left Shift Operator
	 * Left shift operator shifts all bits towards left by a certain number of specified bits.
	 * The bit positions that have been vacated by the left shift operator are filled with 0.
	 * The symbol of the left shift operator is <<.
	 * 212 = 11010100 (In binary)
	 * 212<<1 = 110101000 (In binary) [Left shift by one bit]
	 * 212<<0 = 11010100 (Shift by 0)
	 * 212<<4 = 110101000000 (In binary) =3392(In decimal)
	 */
	int num = 212, i;
	for (i = 0; i <= 2; ++i)
	{
		printf("Right shift by %d: %d\n", i, num >> i);
	}
	printf("\n");

	for (i = 0; i <= 2; ++i)
	{
		printf("Left shift by %d: %d\n", i, num << i);
	}

	return 0;
}