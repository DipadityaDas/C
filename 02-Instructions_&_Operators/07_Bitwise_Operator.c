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
    printf("Output = %d", a & b);

    /* Bitwise OR
     * The output of bitwise OR is 1 if at least one corresponding bit of two operands is 1.
     * In C Programming, bitwise OR operator is denoted by |.
     * Bitwise OR Operation of 12 and 25
     *      00001100
     *  |   00011001
     * --------------
     *      00011101  = 29 (In decimal)
     */
    printf("Output = %d", a | b);



    return 0;
}