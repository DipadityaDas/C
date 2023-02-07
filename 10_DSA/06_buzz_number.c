// Write a C program which accept a integer number form user and check number is buzz number or not.

#include <stdio.h>

void buzzNumber(int num)
{
	if (num % 10 == 7 || num % 7 == 0)
		printf("%d is a Buzz number", num);
	else
		printf("%d is a Buzz not a number", num);
}

int main()
{
	int a;
	printf("Enter any integer number for check buzz or not : ");
	scanf("%d", &a);

	buzzNumber(a);
	return 0;
}