/************************************************************************************************************
 * Input and Output of a String in C
 *
 * Taking string input in C means asking the user to provide some information for the program to manipulate
 * and analyse and storing this information in the form of a string. Similarly, giving output as string means
 * printing into the console some information which the programmer wants the user to know in the form of
 * strings. It is necessary to use strings as input and output strings to the user in C.
 *
 * How to Take Input of a String in C Without Spaces?
 *
 * In C, we can use scanf() to take a string input in C without spaces. Like other data types, we have an
 * access specifier (also known as format specifier) to take input as a string in C as well.
 * The access specifier for string is %s.
 *
 * The syntax for using scanf()function in C :
 * scanf("%s", char *s);
 *
 * Here, s is the pointer which points to the array of characters where the input taken as a string will be stored.
 *
 * Note that in the syntax, we don't use the & symbol with s. This is because & is used to access the address
 * of the variable, but as C doesn't have a string data type, s already stores the address of the character
 * array where the string is stored.
 *
 * Let us look at an example to understand the working of scanf() in C.
 * #include <stdio.h>
 * int main()
 * {
 *    // array to store string taken as input
 *    char color[20];
 *    // take user input
 *    printf("Enter your favourite color: ");
 *    scanf("%s", color);
 *    // printing the input value
 *    printf("Your favourite color is: %s.", color);
 *    return 0;
 * }
 * Output:
 * Enter any sentence: Orange
 * Your favourite color is: Orange.
 *
 * Advantages and Disadvantages of using scanf()
 *    The scanf() function is probably the easiest way to string input in C. We just need the access specifier %s
 * and the pointer to the variable where we want the string to be stored, and it becomes very easy to input the
 * string in C.
 *
 * On the other hand, there is no limitation on the size of the string that can be taken as an input by scanf()
 * by default. This may cause overflow if we don't have the required space. But this can be easily fixed by
 * specifying an explicit upper bound of memory which can prevent overflow. Apart from this, there is a chance
 * of a failed input which would lead to our variable pointer pointing to an unknown location, which can lead
 * to further problems in the code.
 *
 * Hence, the scanf() function should be preferred when we know the string we want to input doesn't contain
 * white spaces and that it will not exceed the memory buffer.
 */

#include <stdio.h>

int main()
{
	// array to store string taken as input
	char color[20];

	// take user input
	printf("Enter your favourite color: ");
	scanf("%s", color);

	// printing the input value
	printf("Your favourite color is: %s.", color);

	return 0;
}
