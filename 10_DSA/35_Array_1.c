// Write a C Program to print the Largest number of the User-defined Array.

#include <stdio.h>

int main()
{
	int size, i, largest;

	printf("Enter the Size of the Array : ");
	scanf("%d", &size);

	int arr[size];

	printf("Enter the array elements :\n");
	for (i = 0; i < size; ++i)
	{
		scanf("%d", &arr[i]);
	}

	largest = arr[0];
	for (i = 1; i < size; ++i)
	{
		if (largest < arr[i])
			largest = arr[i];
	}

	printf("The Largest Number in the Array : %d", largest);
	return 0;
}