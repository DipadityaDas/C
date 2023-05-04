# include <stdio.h>

int main()
{
	// Variable Declaration
	int age = 22;
	float pi = 3.14;
	char star = '*';

	// The First argument of printf funtion is a string of characters to be printed,
	// with each % indicating where one of the other (2nd,3rd,..) arguments is to be
	// substituted, and in what form it is to be printed.
	// For instance %d specfies Integer Argument
	// %f specfies Floating-point Argument
	// %c specfies Character Argument
	// %s specfies String Argument
	printf("Age = %d \n", age);
	printf("The value of Pi = %f \n",pi);
	printf("Star is %c\n", star);
	return 0;
}
