/*********************************************************************************************************
 * Pointer to Pointer in C Programming Language.
 *
 * A pointer to a pointer is a form of multiple indirection, or a chain of pointers.
 * Normally, a pointer contains the address of a variable. When we define a pointer to a pointer,
 * the first pointer contains the address of the second pointer, which points to the location that
 * contains the actual value.
 *
 * A variable that is a pointer to a pointer must be declared as such. This is done by placing an
 * additional asterisk in front of its name. For example, the following declaration declares a pointer
 * to a pointer of type int −
 *
 * int **var;
 *
 * When a target value is indirectly pointed to by a pointer to a pointer, accessing that value
 * requires that the asterisk operator be applied twice.
 *
 * The syntax to declare a double pointer is
 *
 * pointer_data_type **variable_name = &ordinary_pointer_variable;
 *
 * Here, the initialization is optional. We can simply declare the double pointer variable and
 * assign it a value later.
 *
 * int var = 10;
 * // Let's say the address of this variable is 0xdbfeb8
 * int *ptr = &var;
 * // Value in ptr is 0xdbfeb8 and say the address of ptr is 0xdbfeb0
 * int **double_ptr = &ptr;
 * // The value stored in double_ptr is 0xdbfeb0
 *
 * A double pointer should only point to an ordinary pointer. In case we attempt to do something like this
 *
 * int **double_ptr = &var;
 * the compiler will generate the following warning
 *
 * warning: assignment from incompatible pointer type [-Wincompatible-pointer-types]
 *
 * Size of pointer to pointer in C
 * Since a double pointer in C behaves similar to a normal pointer, the size of the double pointer variable
 * and the size of the ordinary pointer variable are always equal.
 * This can be verified using the following line:
 *
 * printf("%lu %lu", sizeof(ptr), sizeof(double_ptr));
 *
 * Output:
 * 8 8
 *
 * Note: The output above depends on the type of machine in which the code is being executed.
 * In other words, the size of a pointer is not fixed in C and it depends on different factors
 * like OS and CPU architecture.
 * Usually, for a 64-bit OS, the size is 8 bytes and for a 32-bit OS, the size is 4 bytes.
 *
 */

// 2D Character Array

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char **words;
	// Allocate space for storing 5 strings
	words = (char **)malloc(5 * sizeof(*words));

	// To access/assign each string, we can use the following format
	words[0] = "apple";
	words[1] = "banana";
	words[2] = "jackfruit";
	words[3] = "melon";
	words[4] = "orange";

	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", words[i]);
	}

	free(words); // Deallocate the memory that was allocated dynamically
	return 0;
}
