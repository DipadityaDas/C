// Write a C program to calulate the sum of first n natural number.

#include <stdio.h>

int sum(int);

int main()
{
	int number, total = 0;

	printf("Enter the number of Natual Numbers: ");
	scanf("%d", &number);

	printf("The sum of First %d Natural Numbers = %d", number, sum(number));
	return 0;
}

int sum(int number)
{
	if (number == 1)
		return 1;
	return number + sum(number - 1);
}