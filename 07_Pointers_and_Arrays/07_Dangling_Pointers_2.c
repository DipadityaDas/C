/***********************************************************************************************************
 * Dangling Pointers in C - Part 2
 * 
 * Function Call
 * If we declare a variable inside a function, then that variable will be local to that function execution 
 * and cannot be accessed outside that function's scope. Now, suppose main() function's pointer stores the 
 * address of that local variable inside the function, this way we can access address of that local variable 
 * as long as the function is executing, but once the function execution gets over, all internal variables 
 * goes to garbage collection and are not in memory anymore, but main() function's pointer is still pointing 
 * to that particular address which is now not available in memory, hence creating a dangling condition and 
 * would be called as a Dangling Pointer.
 * 
 * The below diagram shows how a dangling pointer is created in case of a function call.
 * 
 * 1. A function() is called inside the main() function, memory is allocated by the system for the 
 *    function() block.
 * 2. A local variable temp is declared and initialized inside the function(). 
 *    Let the address of temp is 2000. After returning the address of the temp variable function 
 *    execution finishes and temp also gets deleted from the memory.
 * 3. Returned address 2000 is stored in ptr pointer but as temp is not there in the memory anymore, 
 *    ptr points to some garbage value and acts as a dangling pointer.
 *
*/

#include <stdio.h>

// definition of danglingPointer() function
int *danglingPointer()
{
	// temp variable has local scope
	int temp = 10;

	// returning address of temp variable
	return &temp;
}

int main()
{
	// ptr will point to some garbage value
	// as temp variable will be destroyed
	// after the execution of below line
	int *ptr = danglingPointer();

	// ptr is a Dangling Pointer now
	// ptr contains some random address and
	// is pointing to some garbage value
	printf("%d", *ptr);

	return 0;
}
