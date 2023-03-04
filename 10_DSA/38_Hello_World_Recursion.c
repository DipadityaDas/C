// Write a C Program to print Hello World 5 times using Recursion.

#include <stdio.h>

void printHW(int);

int main()
{
	printHW(5);
	return 0;
}

void printHW(int count)
{
	if (count == 0)
		return ; // Empty return because the return type in void.
	printf("Hello, World!!\n");
	printHW(count - 1);
}