// Write a program in C to check whether a number is palindrome or not using iteration.
#include <stdio.h>

int main()
{
	int n, reverse = 0, temp;
	printf("Enter the number : n");
	scanf("%d", &n);
	temp = n;
	while (temp != 0)
	{
		reverse = reverse * 10 + temp % 10;
		temp = temp / 10;
	}

	if (reverse == n)
	{
		printf("The number is a Palindrome");
	}
	else
	{
		printf("The number is not a Palindrome");
	}

	return 0;
}