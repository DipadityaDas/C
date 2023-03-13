/***********************************************************************************************************
 * Dangling Pointers in C
 * 
 * Dangling means to hang freely. So as the name suggests, Dangling Pointers are the pointers that point 
 * to some freed/deleted location from the program's memory (memory that is currently not in the use of 
 * the program). 
 * When we talk about allocation and deallocation of memory blocks, we see Dynamic Memory Allocation 
 * concepts. In Dynamic Memory Allocation, generally, we use malloc(), calloc() functions to allocate 
 * a memory block and free() function to deallocate a memory block in C Language. So, once we deallocate 
 * a memory block using the free() function, a Dangling Pointer is generated.
 * 
 * Dangling Pointers are generated when we do not modify the value of a pointer after deallocation of 
 * a memory block or when a variable goes out of scope.
 * 
 * 1. An integer pointer ptr points to an integer variable with value 5, ptr contains the address of the variable.
 * 2. When the integer variable gets deallocated from memory, ptr shifts from a regular pointer to a Dangling 
 *    Pointer, and it points to some Invalid / Not in use location.
 * 
 * Different ways where pointers act as Dangling Pointers in C
 * There are three different ways in which a pointer can act as a dangling pointer in C :
 * 1. Deallocation of memory
 * 2. Function Call
 * 3. Variable goes out of scope
 * 
 * De-allocation of memory.===========
 * Allocation and deallocation of memory blocks are performed using library functions, 
 * like malloc(), calloc() functions are used for allocating a memory block, while 
 * free() function is used to deallocate a memory block. So, When we deallocate a memory 
 * block using free() function and do not modify the pointer value, it will cause the 
 * pointer to act as a Dangling Pointer.
 * 
 * The free() function takes a single parameter, i.e. a pointer pointing to the memory to be deallocated.
 * 
 * For Example:
 * 1. An integer pointer ptr points to an integer variable with value 10, ptr contains the address of the 
 *    variable allocated dynamically using malloc() method.
 * 2. When the integer variable gets deallocated from memory using the free(ptr); function, ptr points 
 *    to some garbage value i.e. invalid location/data and acts as a dangling pointer.
*/

// Dangling Pointers using dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>

int main()
{
	// 4 bytes of int memory block (64bit compiler)
	// allocated using malloc() during runtime
	int *ptr = (int *)malloc(sizeof(int)); // normal pointer

	*ptr = 10;

	// memory block deallocated using free() function
	free(ptr);

	// here ptr acts as a dangling pointer
	printf("%d", *ptr);
	// prints garbage value in the output console

	return 0;
}

/* In this program, we can see that:
 * 1. First, an integer pointer ptr has been assigned a memory block of sizeof(int) 
 *    (generally 4-bytes) using malloc() function. It is acting as a normal pointer for now.
 * 2. Integer memory block pointed by ptr has been assigned value 10.
 * 3. Next, free(ptr) deallocates the 4-bytes of memory space (containing value 10) pointed 
 *    by the ptr pointer.
 * 4. Now, ptr will act as a Dangling Pointer because it is pointing to some deallocated memory block.
*/