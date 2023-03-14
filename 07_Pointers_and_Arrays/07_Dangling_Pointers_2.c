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

/**In this program, we can see that
 * 1. First, an integer pointer ptr has been assigned a function call of the danglingPointer() function.
 * 2. Now, danglingPointer() is invoked and execution of the function starts. danglingPointer() has a 
 *    return type of int * i.e. the function will return an address of an integer block that can be 
 *    stored in an integer pointer.
 * 3. Inside the danglingPointer() function, we have an integer variable temp with local scope, temp 
 *    has been assigned a value of 10. Now, we are returning the address of the temp variable and after 
 *    returning the address, memory occupied by the danglingPointer() function will be deallocated along 
 *    with the temp variable.
 * 4. Now, the control will come back to main() function, and we have an address stored in ptr pointer, 
 *    which is pointing to some deallocated memory (previously occupied by temp variable).
 * 5. ptr is now acting as a Dangling Pointer because it is pointing to the deallocated memory block.
*/