/**********************************************************************************************************
 * Initializing a String in C Programming Language
 *
 * There are four methods of initializing a string in C :
 *
 * 1. Assigning a string literal with size
 *    We can directly assign a string literal to a character array keeping in mind to keep the
 *    array size at least one more than the length of the string literal that will be assigned to it.
 *
 *    NOTE: While setting the initial size, we should always account for one extra space used by the
 *    null character. If we want to store a string of size n, we should set the initial size to be n+1.
 *
 *    For example:
 *    char str[10] = "Dipaditya\0";
 *
 *    The string length here is 9, but we have kept the size to be 10 to account for the Null character.
 *    The compiler adds the Null character(\0) at the end automatically.
 *    NOTE: If the array cannot accommodate the entire string, it only takes characters based on its space.
 *
 *    For example:
 *    char str[3] = "Dipaditya\0";
 *    printf("%s",str); //Output: Dip
 *
 * 2. Assigning a string literal without size
 *    It is also possible to directly assign a string literal to a character array without any size.
 *    The size gets determined automatically by the compiler at compile time.
 *
 *    For example:
 *    char str[] = "DipadityaDas";
 *
 *    The critical thing to remember is that the name of the string, here "str" acts as a pointer
 *    because it is an array.
 *
 * 3. Assigning character by character with size
 *    We can also assign a string character by character. However, it is essential to set the
 *    end character as '\0'.
 *
 *    For example:
 *    char str[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
 *
 * 4. Assigning character by character without size
 *    Like assigning directly without size, we also assign character by character with the Null Character
 *    at the end. The compiler will determine the size of the string automatically.
 *
 *    For example:
 *    char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};
 */

#include <stdio.h>

int main()
{
	char first_name[15] = "ANTHONY";
	char first_name[15] = {'A', 'N', 'T', 'H', 'O', 'N', 'Y', '\0'}; // NULL character '\0' is required at end in this declaration
	char string1[6] = "hello";										 /* string size = 'h'+'e'+'l'+'l'+'o'+"NULL" = 6 */
	char string2[] = "world";										 /* string size = 'w'+'o'+'r'+'l'+'d'+"NULL" = 6 */
	char string3[6] = {'h', 'e', 'l', 'l', 'o', '\0'};				 /*Declaration as set of characters ,Size 6*/
	return 0;
}