


// C program to print all Perfect numbers between 1 to n

#include <stdio.h>

int main()
{
	int i, j, end, sum;

	printf("Enter upper limit: ");
	scanf("%d", &end);

	printf("All Perfect numbers between 1 to %d:\n", end);

	i = 1;
	do
	{
		sum = 0;

		for (j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				sum += j;
			}
		}

		if (sum == i)
		{
			printf("%d, ", i);
		}

		i++;
	} while (i <= end);

	return 0;
}