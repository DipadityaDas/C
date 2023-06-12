/***************************************************************************************************************
 * Length of a String
 *
 * strlen()
 *
 * Syntax:
 * size_t strlen(const char *str)
 *
 * size_t represents long unsigned int.
 *
 * It takes a string (character array or character pointer) as input and writes the length of that string
 * without including the end character '\0'.
 */

#include <stdio.h>
#include <string.h>

int main() {

	char string1[20] = "DipadityaDasEsports";
	printf("Length of string string1: %ld", strlen(string1));

	return 0;
}