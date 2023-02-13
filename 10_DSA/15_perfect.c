// Write a C Program to check given number is Perfect or not.
#include <stdio.h>

int main()
{
	int sum = 0, i, originalNum;

	printf("Enter number: ");
	scanf("%d", &originalNum);

	for (i = 1; i <= originalNum / 2; i++)
	{
		if (originalNum % i == 0)
		{
			sum = sum + i;
		}
	}

	if (sum == originalNum)
		printf("The given no. is perfect number.");
	else
		printf("The given no. is not a perfect number.");

	return 0;
}