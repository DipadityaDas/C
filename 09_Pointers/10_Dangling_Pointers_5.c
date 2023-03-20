/***********************************************************************************************************
 * Dangling Pointers in C - Part 5
 *
 * 2. Static variables with global scope
 * 
 * Static variables are the variables that remain in the memory until the execution of the program finishes. 
 * We can use the static keyword to declare a static variable in our program.
 * 
 * Syntax :
 * static int x;
 * 
 * x is a static integer variable with global scope and will stay in the memory until the execution of the 
 * program finishes. Global scope means we will be able to use our variable anywhere in our program, we can 
 * declare our variable anywhere in the program inside any function or in an inner block of code.
 * 
 * x is a static integer variable with global scope and will stay in the memory until the execution of the 
 * program finishes. Global scope means we will be able to use our variable anywhere in our program, we can 
 * declare our variable anywhere in the program inside any function or in an inner block of code.
 * 
 * The example shows how the static variable remains in the memory and avoids the condition of dangling pointers.
 * 
 *   i. A function() is called inside the main() function, memory is allocated by the system for the function() block.
 *  ii. A global variable static temp is declared and initialized inside the function(). Let the address of temp is 
 *      2000. After returning the address of the temp function execution finishes, temp remains in the memory 
 *      because of its static nature.
 * iii. Returned address 2000 is stored in ptr pointer and as temp is not deleted from the memory, ptr points to 
 *      temp variable with value 10. So, ptr will not act as a dangling pointer.
 */

#include <stdio.h>

// definition of notADanglingPointer() function
int *notADanglingPointer()
{
	// temp variable has a global scope
	static int temp = 10;

	// returning address of temp variable
	return &temp;
}

int main()
{
	// ptr will point to temp variable
	// as temp variable has a global scope now, it will not be destroyed after the execution of below line
	int *ptr = notADanglingPointer();

	// ptr is not a Dangling Pointer anymore
	// ptr contains address of static variable temp
	// and is pointing to temp with value 10
	printf("%d", *ptr);

	return 0;
}

/**
 * Explanation :
 * 
 * 1. notADanglingPointer() function now returns the address of a global variable.
 * 2. ptr contains the address of temp variable i.e. a global variable.
 * 3. ptr is acting as a Normal Pointer in this code.
 * 4. Output will be value 10 i.e. stored in temp variable.
*/