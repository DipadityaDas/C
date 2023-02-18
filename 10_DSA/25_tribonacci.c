// Write a C program to print Tribonacci series

#include <stdio.h>

int printSeries(int n)
{
	if (n == 0 || n == 1 || n == 2)
		return 0;
	else if (n == 3)
		return 1;
	else
		return printSeries(n - 1) + printSeries(n - 2) + printSeries(n - 3);
}

void tribonacci(int n)
{
	for (int i = 1; i < n; i++)
		printf("%d\t", printSeries(i));
}

int main()
{
	int n;

	printf("Enter the number of terms to generate the tribonacci series: ");
	scanf("%d", &n);

	printf("Fibonacci Series is:\n");
	tribonacci(n);
	return 0;
}