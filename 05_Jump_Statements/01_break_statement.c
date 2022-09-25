/***************************************************************************************************************************
 * break statement
 * break is jump statement used to terminate a switch or loop on some desired condition. On execution, it immediately
 * transfer program control outside the body of loop or switch. In the case of nested switch or loop, it terminates
 * the innermost switch or loop.
 *
 */

// Write a C program to check prime number
#include <stdio.h>

int main()
{
	/* Variable declarations */
	int num, isPrime, i;

	/* Input number from user */
	printf("Enter any number: ");
	scanf("%d", &num);

	/* Initially assume that the number is prime */
	isPrime = 1;
	for (i = 2; i < num; i++)
	{
		/*
		 * If number is divided by any number
		 * between 2 to n. Then the given number
		 * is not prime.
		 */
		if (num % i == 0)
		{
			/*
			 * Number is not prime.
			 * Hence, set prime as 0
			 */
			isPrime = 0;

			/*
			 * Number is not prime, no need to check further.
			 * Hence terminate from loop.
			 * Using break here will terminate from loop not from if
			 */
			break;
		}
	}

	/* Check the prime flag value */
	if (isPrime == 1)
	{
		printf("Number is prime number.");
	}
	else
	{
		printf("Number is composite number.");
	}
	return 0;
}