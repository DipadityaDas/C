/*********************************************************************************************************************
 * Input of a String in C
 *
 * Methods to Accept String With Space in C
 *
 * 3. Using scanset %[ ] in scanf()
 *    Scanset is denoted by %[]. It can be used inside the scanf() function, and we can enclose individual characters
 * or a range of characters within the scanset expression. Using this scanf() will only process these characters which
 * have been specified inside the square brackets. We can also include multiple characters by adding commas in between
 * the characters.
 *
 * There are two ways by which we can use scanset to take input of a string in C with spaces.
 * a. {%[^\n]%*c} inside scanf
 *                We can use the expression {%[^\n]%*c} inside scanf() to take the complete line including spaces as
 * a string input in C. In this case, we have ^\n inside the scanset brackets. The circumflex symbol ^ is used in
 * this case. The use of this symbol is that it directs the specifier to stop reading once the character specified
 * after it occurs once in the input. In this case, we have the \n newline character. Hence all the characters are
 * taken as input until a new line occurs. As the newline character will also be taken as input, we discard it by
 * further including %*c, so that only the user input is stored in the string.
 *
 * The complete syntax for this method is:
 * scanf("%[^\n]%*c", s);
 *
 * b. %[^\n]s inside scanf
 *                 We can also use the expression %[^\n]s inside scanf() to take the complete line including spaces
 * as a string input in C. The characters [] denote the scanset character. In this case, we have ^\n inside the
 * brackets, the circumflex symbol at the start will make sure all the characters are taken as input until the
 * newline character \n is encountered. The expression [^\n] is included between the % and the s characters as
 * %s is used as an access specifier for taking strings as input in C.
 *
 * The complete syntax for this method is:
 * scanf("%[^\n]s", s);
 * Here, s is the pointer which points to the array of characters where the input taken as a string in C will be stored.
 */

#include <stdio.h>

int main()
{
	// array to store string taken as input
	char sentence[20], sentence2[20];

	// take user input
	printf("Enter the first sentence: ");

	// use scanf to get input
	scanf("%[^\n]%*c", sentence);

	// take another user input
	printf("Enter the second sentence: ");

	// use scanf to get input
	scanf("%[^\n]s", sentence2);

	// printing the input value
	printf("The First Sentence: %s\n", sentence);
	printf("The Second Sentence: %s", sentence2);

	return 0;
}
