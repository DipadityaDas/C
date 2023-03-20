/***************************************************************************************************************
 * Call By Reference in C Programming Language.
 *
 * The call by reference method of passing arguments to a function copies the address of an argument into
 * the formal parameter. Inside the function, the address is used to access the actual argument used in the call.
 * It means the changes made to the parameter affect the passed argument.
 *
 * To pass a value by reference, argument pointers are passed to the functions just like any other value.
 * So accordingly you need to declare the function parameters as pointer types as in the following function
 * swap(), which exchanges the values of the two integer variables pointed to, by their arguments.
 *
 */

// Write a C Program to swap the values of two variables.

#include <stdio.h>

void swap(int *, int *);

int main(void)
{
	int a, b;
	printf("Enter the value of a : ");
	scanf("%d", &a);
	printf("Enter the value of b : ");
	scanf("%d", &b);

	if (a != b)
	{
		swap(&a, &b);
		printf("After swaping\nThe value of a : %d\nThe value of b : %d\n", a, b);
	}
	else
		printf("Nothing to swap. Both the numbers are same.");
	return 0;
}

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
