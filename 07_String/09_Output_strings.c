#include <stdio.h>

int main()
{
	// char array that stores complete name of the student
	char name[50];

	// take user input
	printf("Enter your full name: \n");

	// use gets() to take input with spaces
	gets(name);

	// char array that stores city of the student
	char city_name[30];

	// take user input
	printf("Enter your city name: \n");

	// use scanf to take input without spaces
	scanf("%s", city_name);

	// print name with space using printf
	printf("Your name is %s \n", name);

	printf("You live in ");

	// print city using fputs
	fputs(city_name, stdout);

	return 0;
}
