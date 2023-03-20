/*************************************************************************************************************
 * Pointers in C Programming Language.
 *
 * Let us begin with a simplified picture of how memory is organized.
 * A typical machine has an array of consecutively numbered or addressed memory cells that may
 * be manipulated individually or in contiguous groups.
 * One common situation is that any byte can be a char, a pair of one-byte cells can be treated
 * as a short integer, and four adjacent bytes form a long. A pointer is a group of cells (often two or four)
 * that can hold an address.
 *
 * If c is a char and p is a pointer that points to it.
 * The unary operator & gives the address of an object, so the statement assigns the address of c to
 * the variable p, and p is said to "point to" c.
 *
 * p = &c;
 *
 * The & operator only applies to objects in memory: variables and array elements.
 * It cannot be applied to expressions, constants, or register variables.
 *
 * The unary operator * is the indirection or dereferencing operator; when applied to a pointer,
 * it accesses the object the pointer points to. Suppose that x and y are integers and ip is a pointer to int.
 * This artificial sequence shows how to declare a pointer and how to use & and
 *
 * int x = 1, y = 2, z[10];
 * int *ip;          // ip is a pointer to int
 *
 * ip  = &x;         // ip now points to x
 * y   = *ip;        // y is now 1
 * *ip = 0;          // x is now 0
 * ip  = &z[O];      // ip now points to z[0]
 *
 * The declarations of x, y, and z are what we've seen all along.
 * The declaration of the pointer ip, is intended as a mnemonic; it says that the expression is an int.
 *
 * int *ip; 		//type *variablename;
 *
 * The syntax of the declaration for a variable mimics the syntax of expressions in which the variable might appear.
 * This reasoning applies to function declarations as well.
 *
 * NOTE: Every pointer points to a specific data type.
 */

#include <stdio.h>

int main()
{

	int var = 20; /* actual variable declaration */
	int *ip;	  /* pointer variable declaration */

	ip = &var; /* ip points to var */

	printf("Memory Address of var : %p\n", &var);
	printf("Value of var variable: %d\n", var);

	/* address stored in pointer variable */
	printf("Address stored in ip : %p\n", ip);

	/* access the value using the pointer */
	printf("Value of *ip variable: %d\n", *ip);

	return 0;
}