/**************************************************************************************************************
 * What is the strnlen function in C?
 *
 * strnlen()
 *
 * Syntax
 * size_t strnlen(const char *str, size_t maxlen)
 *
 * size_t represents long unsigned int.
 *
 * The strlen function returns the length of the string s in bytes. (In other words, it returns the offset of
 * the terminating null byte within the array.)
 *
 * This is an easy mistake to make when you are working with functions that take string arguments;
 * those arguments are always pointers, not arrays.
 *
 * strnlen() take a string and a positive integer maxlen as input and return the length of the string if maxlen
 * is greater than the size of the string otherwise, always return maxlen which means it only counts the
 * characters till str[maxlen -1].
*/

#include <stdio.h>
#include <string.h>

int main() {

  char string1[20] = "ScalerAcademy";
  printf("Length of string string1 when maxlen is 25: %ld \n", strnlen(string1, 25));
  printf("Length of string string1 when maxlen is 5: %ld", strnlen(string1, 5));
}
