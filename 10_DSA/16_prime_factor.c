// Write a program to find all Prime Factor of a given number.
#include <stdio.h>
#include <math.h>

int main()
{
	int i = 0, j, n, temp = 0;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Prime factors of a given number %d\n", n);

	while (n % 2 == 0)
	{
		printf("%d, ", 2);
		n = n / 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			printf("%d, ", i);
			n = n / i;
		}
	}

	if (n > 2)
	{
		printf("%d ", n);
	}

	return 0;
}