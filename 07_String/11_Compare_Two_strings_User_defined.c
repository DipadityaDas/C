/****************************************************************************************************************
 * String Comparison without Using strcmp() Function
 *
 * String comparison in C is also possible by using without strcmp() function.
 * We could compare the two strings by traversing each index using a loop and comparing each character one by one.
 *
 * String comparison in C also possible by using pointers.
 * We use pointers to traverse the strings and then compare the characters pointed by the pointer.
 *
 */

#include <stdio.h>
int compareTwoString(char *, char *);
int compareTwoString2(char[], char[]);

int main()
{
	char str1[50]; // declaration of char array
	char str2[50]; // declaration of char array

	printf("Enter the first string : ");
	scanf("%s", str1);
	printf("\nEnter the second string : ");
	scanf("%s", str2);

	int compare = compareTwoString(str1, str2); // calling compareTwoString() function.
	if (compare == 0)
		printf("Pointer Method: Strings are equal");
	else
		printf("Pointer Method: Strings are not equal");

	int compare2 = compareTwoString2(str1, str2); // calling compareTwoString() function
	if (compare2 == 0)
		printf("Array Method: Strings are same");
	else
		printf("Array Method: Strings are not same");

	return 0;
}

// Comparing both the strings using pointers
int compareTwoString(char *a, char *b)
{
	int flag = 0;
	while (*a != '\0' && *b != '\0') // while loop
	{
		if (*a != *b)
		{
			flag = 1;
		}
		a++;
		b++;
	}
	if (*a != '\0' || *b != '\0')
		return 1;
	if (flag == 0)
		return 0;
	else
		return 1;
}

// Comparing both the strings.
int compareTwoString2(char a[], char b[])
{
	int flag = 0, i = 0;				 // integer variables declaration
	while (a[i] != '\0' && b[i] != '\0') // while loop
	{
		if (a[i] != b[i])
		{
			flag = 1;
			break;
		}
		i++;
	}
	if (a[i] != '\0' || b[i] != '\0')
		return 1;
	if (flag == 0)
		return 0;
	else
		return 1;
}
