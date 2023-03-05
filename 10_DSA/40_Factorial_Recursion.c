// Write a C Program to Calulate the factorial of a number using Recursion.

#include <stdio.h>

int factorial(int number);

int main()
{
	int number;

	printf("Enter any number: ");
	scanf("%d", &number);

	printf("The factorial of %d = %d.\n", number, factorial(number));

	return 0;
}

int factorial(int number)
{
	if (number == 1)
		return 1;

	return number * factorial(number - 1);
}
