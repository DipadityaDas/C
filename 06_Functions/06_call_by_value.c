/*************************************************************************************************************
 * Call by Value in C Programming language.
 * 1. In Call by Value Method, the value of the actual parameters is copied into the formal parameters. 
 *    In other words, we can say that the value of the variable is used in the function call.
 * 2. In call by value method, we can not modify the value of the actual parameter by the formal parameter.
 * 3. In call by value, different memory is allocated for actual and formal parameters since the value of 
 *    the actual parameter is copied into the formal parameter.
 * 4. The actual parameter is the argument which is used in the function call whereas formal parameter is 
 *    the argument which is used in the function definition.
*/

#include <stdio.h>

void change(int num)
{
	printf("Before adding value to num inside function, num = %d", num);
	num = num + 200;
	printf("After adding value to num inside function, num = %d", num);
}

int main()
{
	int x = 100;

	printf("Before the function call, x = %d", x);
	change(x);
	printf("After the function call, x = %d", x);

	return 0;
}
