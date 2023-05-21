#include <stdio.h>

int main()
{
	// array to store string taken as input
	char sentence[20], sentence2[20];

	// take user input
	printf("Enter the first sentence: ");

	// use scanf to get input
	scanf("%[^\n]%*c", sentence);

	// take another user input
	printf("Enter the second sentence: ");

	// use scanf to get input
	scanf("%[^\n]s", sentence2);

	// printing the input value
	printf("The First Sentence: %s\n", sentence);
	printf("The Second Sentence: %s", sentence2);

	return 0;
}
