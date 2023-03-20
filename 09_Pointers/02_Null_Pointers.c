/*******************************************************************************************************
 * NULL Pointers in C programming language.
 *
 * In the C programming language, a null pointer is a pointer that does not point to any memory location
 * and hence does not hold the address of any variables. It just stores the segment's base address.
 * That is, the null pointer in C holds the value Null, but the type of the pointer is void.
 * A null pointer is a special reserved value declared in a header file called stddef.
 * Null indicates that the pointer is pointing to the first memory location. meaning that 0th location.
 *
 * At a high level, NULL is a null pointer that is implemented in C for a multitude of scenarios.
 *
 * To initialize a pointer variable when it hasn't been assigned a proper memory address yet.
 * Before accessing any pointer variable, check for a null pointer.
 * We can handle errors in pointer-related code this way, for example,
 * only dereference a pointer variable if it is not NULL.
 *
 * When we don't want to pass a valid memory address to a function argument, we can pass a null pointer.
 *
 * Syntax: The syntax of a null pointer can be defined in two ways.
 *
 * int *pointer_var = NULL;
 * Or
 * int *pointer_var = 0
 *
 * Applications of Null Pointer in C
 * A Null pointer can be used in the following ways:
 * 1. When the pointer variable does not point to a valid memory address, it is used to initialize it.
 * 2. Before dereferencing pointers, it is utilized to execute error handling.
 * 3. When we don't want to pass the memory location directly, we pass it as a function argument,
 *    which is then utilized to return from a function.
 * 
 * How Does Null Pointer Work in C?
 * In C, a null pointer is a variable that has no valid address and is allocated to zero or NULL. 
 * Normally, the null pointer does not point to anything. NULL is a macro constant defined in several 
 * header files in the C programming language, including stdio.h, alloc.h, mem.h, stddef.h, and stdlib.h. 
 * Also, take note that NULL should only be used when working with pointers.
 * 
 * Best Practices for NULL Pointer Usage
 * To avoid programming errors, use a NULL pointer as a best practice.
 * 1. Before using a pointer, make it a practice to assign it a value. 
 *    Don't utilize the pointer before it's been initialized.
 * 2. If you don't have a valid memory location to store in a pointer variable, set it to NULL instead.
 * 3. Check for a NULL value before utilizing a pointer in any of your function code.
 * 
 * For more info: https://www.scaler.com/topics/null-pointer-in-c/
 *
 */

#include <stdio.h>

int main(void)
{
	int num = 10;

	int *ptr1 = &num;
	int *ptr2;
	int *ptr3 = 0;

	if (ptr1 == 0)
		printf("ptr1: %s\n", ptr1);
	else
		printf("ptr1: NOT NULL\n");

	if (ptr2 == 0)
		printf("ptr2: %s\n", ptr2);
	else
		printf("ptr2: NOT NULL\n");

	if (ptr3 == 0)
		printf("ptr3: %s\n", ptr3);
	else
		printf("ptr3: NOT NULL\n");

	return 0;
}

/* Explanation: In the above example, we initialized three pointers as *ptr1, *ptr2, and *ptr3, and we
 * assigned a value to the num variable in *ptr1 and compared it by 0 because *ptr1 is not equal to null,
 * therefore it would output the result as NOT NULL, and we did not assign any value to *ptr2 and
 * As a result, the output will be printed as NOT NULL. We assigned value 0 to *ptr3, which is equal to null,
 * hence the output will be NULL.
 */