#include <stdio.h>

int main()
{
	// array that stores the string which we need to output
	char sentence[20];

	// take user input
	printf("Enter any sentence: ");

	// use fgets to take the input
	fgets(sentence, 20, stdin);

	// printing the input value using printf
	printf("You entered: %s.", sentence);

	return 0;
}
