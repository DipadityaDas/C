// Write a program to check Armstrong Number.

#include <stdio.h>

int main()
{
	int n, r, sum = 0, temp;
	printf("Enter the number = ");
	scanf("%d", &n);

	temp = n;

	while (n > 0)
	{
		r = n % 10;
		sum = sum + (r * r * r);
		n = n / 10;
	}

	if (temp == sum)
		printf("%d is an armstrong number.\n", temp);
	else
		printf("%d is not an armstrong number.\n", temp);

	return 0;
}