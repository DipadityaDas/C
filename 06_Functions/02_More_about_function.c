/****************************************************************************************************************************
 * Functions in C Programming Language
 * 
 * void keyword:
 * The literal meaning of void is empty or blank. In C, void can be used as a data type that represents no data.
 * When the return type of the function is void, then the function will not return anything.
 * When void is used a function parameter, then the function will not take any parameter.
 * Empty parantheses means void as a parameter.
 * 
 * A C function may or may not return a value from the function.
 * 
 * There are four different aspects of function calls.
 * 1. function without arguments and without return value
 * 2. function without arguments and with return value
 * 3. function with arguments and without return value
 * 4. function with arguments and with return value
 * 
 * Library functions are the inbuilt function in C that are grouped and placed at a common place called the library.
 * Such functions are used to perform some specific operations. For example, printf is a library function used to print 
 * on the console. 
 * The library functions are created by the designers of compilers. 
 * All C standard library functions are defined inside the different header files saved with the extension .h. 
 * We need to include these header files in our program to make use of the library functions defined in such header files. 
 * For example, To use the library functions such as printf/scanf we need to include stdio.h in our program 
 * which is a header file that contains all the library functions regarding standard input/output.
*/

#include <stdio.h>

void evaluate(int number);

int main()
{
	int num;
	printf("Enter any number: ");
	scanf("%d", &num);

	evaluate(num);

	return 0;
}

void evaluate(int number)
{
	if (number > 10)
		puts("The number is greater than 10.");
	else if (number < 10)
		puts("The number is less than 10.");
	else
		puts("The number is equal.");
	
}