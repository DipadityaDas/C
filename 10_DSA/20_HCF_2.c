// Write a C Program to find HCF/GCD of two positive number using Repeated Substraction Method.

#include <stdio.h>

int hcf(int n1, int n2)
{
	while (n1 != n2)
	{
		if (n1 > n2)
			n1 -= n2;
		else
			n2 -= n1;
	}
	return n1;
}

int main()
{
	int num1, num2;

	/* Input two numbers from user */
	printf("Enter any two numbers to find HCF: ");
	scanf("%d%d", &num1, &num2);

	printf("HCF of %d and %d = %d\n", num1, num2, hcf(num1, num2));

	return 0;
}