/*********************************************************************************************************
 * string in C Programming Language
 *
 * Strings in C are robust data structures for storing information. They can be implemented with either
 * a one-dimensional array of characters or pointers. There are many ways to initialize a string in C.
 * These strings can be used to read lines of text and can also be passed to functions.
 *
 * Strings are useful for communicating information from the program to the program user and,
 * thus are a part of all programming languages and applications.
 * They are implemented with characters arrays that behave like usual arrays with which we can perform
 * regular operations, including modification. Another way of implementing strings is through pointers
 * since character arrays act as pointers. These pointers point to string literals and cannot be modified
 * as string literals are stored in the read-only memory by most compilers. Thus, any attempt at modifying
 * them leads to undefined behavior.
 *
 * What is a String?
 *
 * A string is a collection of characters (i.e., letters, numerals, symbols, and punctuation marks) in a
 * linear sequence. In C, a string is a sequence of characters concluded with a NULL character '\0'.
 * For example:
 * char str[] = "Scaler.\0";
 *
 * Like many other programming languages, strings in C are enclosed within double quotes(" "), whereas
 * characters are enclosed within single quotes(' '). When the compiler finds a sequence of characters
 * enclosed within the double quotation marks, it adds a null character (\0) at the end by default.
 *
 * Declaring a String in C
 *
 * A String in C is an array with character as a data type. C does not directly support string as a data type,
 * as seen in other programming languages like C++.
 * Hence, character arrays must be used to display a string in C.
 * The general syntax of declaring a string in C is as follows:
 * char variable[array_size];
 *
 * 
 */

// Write a program which declares two string data structures - employee_name & employee_number.

#include <stdio.h>

int main()
{
	char employee_name[20] = "Dipaditya Das\0" ;
	char employee_number[9] = "20239023\0";
	printf("Employee Name = %s\nEmployee Number = %s\n", employee_name, employee_number);
	return 0;
}