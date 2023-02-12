// Write a program in C to print the Fibonacci series using iteration.

#include <stdio.h>

int main()
{
	int n, first = 0, second = 1, result, i;
	printf("Enter the number of terms to generate the fibonacci series: ");
	scanf("%d", &n);
	printf("Fibonacci Series is:\n");
	for (i = 0; i < n; i++)
	{
		if (i <= 1)
			result = i;
		else
		{
			result = first + second;
			first = second;
			second = result;
		}
		printf("%d ", result);
	}
	return 0;
}