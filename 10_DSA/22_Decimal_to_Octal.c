// Write a C Program to convert Decimal number to Octal number.

#include <stdio.h>

int main()
{
	int arr[10], num, i, j;
	printf("Program to Convert Decimal Number into Octal\n");

	printf("Enter a Decimal Number: ");
	scanf("%d", &num);

	printf("Octal Number of %d is =  ", num);

	for (i = 0; num > 0; i++)
	{
		arr[i] = num % 8;
		num = num / 8;
	}

	for (j = i - 1; j >= 0; j--)
	{
		printf(" %d ", arr[j]);
	}

	printf("\n");
	return 0;
}
