// Write a C Program to sum all the elements in an Array.

#include <stdio.h>

int main()
{
	int arr[] = {100, 110, 120, 130, 140};
	int sum = 0;

	// Calculate the Length of the Array.
	int length = sizeof(arr) / sizeof(arr[0]);

	// Loop through all the elements of the Array.
	for (int i = 0; i < length; ++i)
	{
		sum += arr[i]; // sum = sum + arr[i]
	}

	printf("Sum of all the Elements in the array = %d\n", sum);

	return 0;
}
