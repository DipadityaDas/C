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
 *    char str[8] = "Dipaditya";
 *
 *    The string length here is 7, but we have kept the size to be 8 to account for the Null character.
 *    The compiler adds the Null character(\0) at the end automatically.
 *    NOTE: If the array cannot accommodate the entire string, it only takes characters based on its space.
 *
 *    For example:
 *    char str[3] = "Dipaditya";
 *    printf("%s",str); //Output: Dip
 *
 * 
 */