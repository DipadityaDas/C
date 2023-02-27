// Write a C Program which will keep taking input until user enters an odd number.

#include <stdio.h>

int main()
{
	int i;
	
	do
	{
		printf("Enter an Odd Number: ");
		scanf("%d", &i);
	} while (i%2 == 0);
	
	printf("Congrats!! You have entered an Odd Number.");

	return 0;
}