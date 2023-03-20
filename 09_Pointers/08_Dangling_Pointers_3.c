/***********************************************************************************************************
 * Dangling Pointers in C - Part 3
 *
 * Variable goes out of scope
 * If a variable is declared inside some inner block of code, then the variable will have a local scope,
 * and it will be deleted once the execution of the inner block ends. If the address of this local variable
 * is assigned to a pointer declared outside the scope, then it will act as a Dangling Pointer outside the
 * inner block of the code.
 *
 * The example below shows how a dangling pointer is created in case an integer variable goes out of scope.
 *
 * 1. A pointer ptr is declared in the main() function, it is acting as a wild pointer.
 * 2. When we enter the inner block of code, ptr points to the temp variable having value 10.
 *    temp has local scope and will be deleted from the memory as soon as the program control moves
 *    out of the inner block.
 * 3. temp goes out of scope and ptr still contains the address of deleted memory.
 *    So, ptr will point to some garbage value and will act as a dangling pointer.
 *
 *
 */

// Variable goes out of scope
#include <stdio.h>

int main()
{
	// A pointer that has not been initialized is
	// known as a Wild Pointer, ptr is a Wild Pointer.
	int *ptr;

	// variables declared inside the block of will get destroyed
	// at the end of execution of this block
	{
		int temp = 10;
		ptr = &temp; // acting as normal pointer
	}

	// temp is now removed from the memory (out of scope)
	// now ptr is a dangling pointer
	// printf("%d %d", *ptr, temp);

	// as temp is not in the memory anymore so it can't be modified using ptr

	// prints garbage value
	printf("%d", *ptr);

	return 0;
}



/**
 * Compilation Error:
 * 
 * If we comment line 19 i.e. printf("%d %d", *ptr, temp); in the code, printf("%d", *ptr); 
 * prints some garbage value in output.
 * 
 * Explanation :
 * 
 * - In the first step, we have declared an integer pointer ptr without the initialization, 
 *   and it is referred to as a Wild Pointer.
 * - In the second step, we have entered an inner block of code which has some limited scope, 
 *   an integer variable temp is declared inside this block and have the scope until the execution 
 *   of the block ends. Now, the address of temp has been assigned to the ptr pointer, and it 
 *   points to the location of temp. Let's suppose 1000 is the base address where temp has been allocated.
 * 
 * When the scope of this block ends, ptr remains unaffected as it is declared in the outer block of code, 
 * while the memory occupied by temp has been deallocated by the operating system as it is declared 
 * inside of the block.
 * 
 * - Now at the third step, ptr still contains the address 1000, but we have nothing at this location. 
 *   This will result in the pointer known as a Dangling Pointer.
 * - Now that the temp variable is not anymore in the memory, we can't modify the value of temp using 
 *   the ptr pointer.
*/