/****************************************************************************************************************************************
 * Functions in C Programming Language
 * A function is a collection of statements grouped together to do some specific task.
 *
 * Why use functions ?
 * A program is a collection of small tasks that may depend on other tasks.
 * You can use two approaches to write a program.
 * 1. Write code for all tasks in single place, in the main() function sequentially.
 * 2. Divide code for all tasks into separate functions. Use main() function as driver block to execute all other tasks.
 *
 * NOTE: Without main() function C program will not execute.
 *
 * Advantages of using functions:
 * 1. Reusability of code.
 * 2. Data Abstraction.
 * 3. Modular design or Modularity.
 * 4. Easier to write programs.
 * 5. Code maintenance and debugging is easier.
 *
 * Syntax of function declaration:
	return_type    function_name( parameter_list );
 *
 * 1. Return type - Return type defines the data type of value returned by the function.
 *    You must mention return type as void if your function does not return any value.
 * 2. Function name - Function name is a valid C identifier that uniquely identifies the function.
 *    You must follow identifier naming rules while naming a function.
 * 3. Parameter list - A function may accept input. Parameter list contains input type and variable
 *    name given to the function. Multiple inputs are separated using comma ,.
 *
 * Syntax of function definition:
	return_type    function_name(parameter list)
	{
		// Function body
	}
 *
 * Function declaration and definition syntax must be same.
 *
 * Syntax of function call:
	function_name( parameter_list );
 *
 * Function name - Name of the function to execute.
 * Parameter list - Comma separated input given to the function.
 * Parameter list must match type and order mentioned in function declaration.
 * Leave parameter list as blank if function does not accept any input.
 */

#include <stdio.h>

/* Addition function declaration */
int add(int num1, int num2);

/* Main function definition */
int main()
{
	/* Variable declaration */
	int n1, n2, sum;

	/* Input two numbers from user */
	printf("Enter two numbers: ");
	scanf("%d%d", &n1, &n2);

	/*
	 * Addition function call.
	 * n1 and n2 are parameters passed to add function.
	 * Value returned by add() is stored in sum.
	 */
	sum = add(n1, n2);

	/* Print value of sum */
	printf("Sum = %d", sum);

	return 0;
}

/**
 * Addition function definition.
 *
 * Return type of the function is int.
 * num1 - First parameter of the function of int type.
 * num2 - Second parameter of the function of int type.
 */
int add(int num1, int num2)
{
	int s = num1 + num2;

	/* Return value of sum to the main function */
	return s;
}