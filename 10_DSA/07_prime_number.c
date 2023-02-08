// Write a program to print all the prime number between 1 and 100.
#include <stdio.h>

void prime()
{
	int c;
	printf("The Prime Number between 1 and 100 are: ");

	for (int j = 1; j <= 100; j++)
	{
		c = 0;
		for (int i = 1; i <= j; i++)
		{
			if (j % i == 0)
				c++;
		}
		if (c == 2)
			printf("%d ", j);
	}
}

int main()
{
	prime();
	return 0;
}