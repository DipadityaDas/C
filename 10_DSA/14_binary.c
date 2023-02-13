// Write a C program to check given number representation is in binary or not.
#include <stdio.h>

int main()
{
	int j, num;
	
	printf("Enter a number :");
	scanf("%d", &num);

	while (num > 0)
	{
		j = num % 10;
		
		if (j != 0 && j != 1)
		{
			printf("Number is not binary.");
			break;
		}

		num = num / 10;
		
		if (num == 0)
		{
			printf("Number is binary.");
		}
	}
	return 0;
}