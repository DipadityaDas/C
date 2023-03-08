// Write a C program to print the Sum, Product and Average.

#include <stdio.h>

void cal(int, int, int *, int *, int *);
void display(int *, int *, int *);

int main(void)
{
	int a, b, sum, prod, avg;

	printf("Enter the value of a : ");
	scanf("%d", &a);
	printf("Enter the value of b : ");
	scanf("%d", &b);

	cal(a, b, &sum, &prod, &avg);
	display(&sum, &prod, &avg);

	return 0;
}

void cal(int x, int y, int *sum, int *prod, int *avg)
{
	*sum = x + y;
	*prod = x * y;
	*avg = (int)(x + y) / 2;
}

void display(int *sum, int *prod, int *avg)
{
	printf("Sum : %d.\n", *sum);
	printf("Product : %d.\n", *prod);
	printf("Average : %d.\n", *avg);
}