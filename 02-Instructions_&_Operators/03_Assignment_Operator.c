/********************************************************************************
 * An assignment operator is used for assigning a value to a variable. 
 * There are two types of Assignment operators used. 
 * The first one being the Simple Assignment Operator and 
 * the other one being Shorthand Operators or Compound Assignment Operators.
 * Shorthand Assignment Operators combines one of the arithmetic or bitwise operators 
 * with the assignment operator. They are also called as compound assignment operators.
 * Shorthand Assignment Operators follow the following Syntax –
 * variable_name operator = expression/value ;
 */

# include <stdio.h>

int main()
{
    int a = 5, c;

    c = a;      // c is 5
    printf("c = %d\n", c);
    c += a;     // c is 10 
    printf("c = %d\n", c);
    c -= a;     // c is 5
    printf("c = %d\n", c);
    c *= a;     // c is 25
    printf("c = %d\n", c);
    c /= a;     // c is 5
    printf("c = %d\n", c);
    c %= a;     // c = 0
    printf("c = %d\n", c);
    
    return 0;
}
