/***********************************************************************************************************
 * Dangling Pointers in C - Part 4
 * 
 * How to avoid Dangling Pointer Errors in C ?
 * 
 * 1. Assigning NULL after De-allocation of memory
 * 
 * We should assign NULL to the ptr pointer as soon as the memory block pointed by the ptr has been deallocated 
 * using the free() function to avoid creating the dangling pointer problem in our program.
 * 
 * The example below shows our algorithm's flow to assign NULL in a pointer as soon as the memory is deallocated.
 *  i. An integer memory block is allocated using the malloc() function to the ptr pointer, and then we 
 *     assign 5 to the memory block pointer by ptr pointer.
 * ii. free(ptr); deallocates the integer memory block pointed by ptr pointer, ptr now points to some 
 *     garbage value in the memory.
 *iii. As soon as the memory is deallocated using free(), we assign NULL in the ptr pointer. It helps 
 *     to avoid segmentation fault errors and garbage values.
 * iv. ptr = NULL; ensures that ptr is not a dangling pointer anymore.
 * 
 */ 

// Dangling Pointers using dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>

int main()
{

	// 4 bytes of int memory block (64-bit compiler) allocated using malloc() during runtime
	int *ptr = (int *)malloc(sizeof(int)); // normal pointer

	*ptr = 5;

	// memory block deallocated using free() function
	free(ptr);

	// ptr is a dangling pointer
	// prints garbage value
	printf("%d\n", *ptr);

	// this line added will help us to determine that ptr is not pointing to any location currently
	// this pointer is known as NULL Pointer
	ptr = NULL;

	// not a Dangling Pointer anymore
	// no output value
	printf("%d", *ptr);

	return 0;
}
