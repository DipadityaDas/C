/***************************************************************************************************
 * C programming has two operators increment ++ and decrement -- to change the value of an operand (only variable) by 1.
 * Increment ++ increases the value by 1 whereas decrement -- decreases the value by 1. 
 * These two operators are unary operators, meaning they only operate on a single operand.
 * Following types of increment and decrement operators are found in the C language:
 * Prefix Increment/Decrement operator - Update and use the value and store it in the same variable.
 * Postfix Increment/Decrement operator - Use and update the value and store it in the same variable.
*/

#include <stdio.h>

int main()
{
    int a = 10, b = 100;
    float c = 10.5, d = 100.5;

    printf("++a = %d \n", ++a);
    printf("--b = %d \n", --b);
    printf("c++ = %f \n", c++);
    printf("d-- = %f \n", d--);

    return 0;
}