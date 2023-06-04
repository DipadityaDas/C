#include <stdio.h>

int main()
{
	// array that stores first name of the student
	char f_name[20];

	// array that stores last name of the student
	char l_name[20];

	// take user input
	printf("Enter your first name: \n");

	// use fgets to get input
	fgets(f_name, 20, stdin);

	// take user input
	printf("Enter your last name: \n");

	// use fgets to get input
	fgets(l_name, 20, stdin);

	// printing the input value using puts()
	puts(f_name);
	puts(l_name);

	return 0;
}
