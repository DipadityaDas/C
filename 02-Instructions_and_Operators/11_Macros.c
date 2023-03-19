/*********************************************************************************************************************
 * Macros in C
 *
 * The macro in C language is known as the piece of code which can be replaced by the macro value.
 * The macro is defined with the help of #define preprocessor directive and the macro doesn’t end with a semicolon(;).
 * Macro is just a name given to certain values or expressions it doesn't point to any memory location.
 *
 * Whenever the compiler encounters the macro, it replaces the macro name with the macro value.
 * Two macros could not have the same name.
 *
 * The syntax of the macro:
 * #define PI 3.14
 * 1. #define - Preprocessor Directive
 * 2. PI - Macro Name
 * 3. 3.14 - Macro Value
 *
 * What are Preprocessor and Preprocessor Directives in C Programming?
 *
 * Whenever we write a certain code in C language, it goes through the process of compilation, where it gets
 * converted from source code to machine-understandable code. But before the compilation process, the source
 * code goes through preprocessing, which is done by the preprocessor.
 *
 * If there are some preprocessing directives found, then certain actions are taken on them by the preprocessor.
 * There are multiple types of preprocessors such as #define, #if, #error, and #warning etc., They all start with the # symbol.
 *
 * To define the macro, we use the #define preprocessing directive, which performs the action to replace the macro name
 * with the macro value at the time of preprocessing.
 *
 * Types of Macros in C Language:
 * 1. Object like Macros in C -
 *    // Examples of object like macros in C language
 *       #define MAX 100
 *       #define MIN 1
 *       #define GRAVITY 9.8
 *       #define NAME "Scaler"
 *       #define TRUE 1
 *       #define FALSE 0
 * 2. Function Like Macros in C -
 *    // function like macro
 *       #define Area(r) (PI*(r*r))
 * 3. Chain Like Macros in C -
 *    #define PI 3.14
 *    #define Area(r) (PI*(r*r))
 * 4. Predefined Macros and their features:
 *    There are some predefined macros in C that we can directly use in the program and they aren't modifiable.
 *    1		__LINE__	Macro	It contains the current line number on which this macro is used.
 *    2		__FILE__	Macro	It contains the name of the file where the current program is present.
 *    3		__DATE__	Macro	It contains the current date in MMM DD YYYY format.
 *    4		__TIME__	Macro	It contains the current time in HH:MM format.
 *    5		__STDC__	Macro	It is defined as 1 when there is a successful compilation.
 */

#include <stdio.h>

// object like macro
#define PI 3.14

// function like macro
#define Area(r) (PI * (r * r))

int main()
{
	// declaration and initialization of radius
	float radius = 2.5;

	// declaring and assigning the value to area
	float area = Area(radius);

	// Printing the area of circle
	printf("Area of circle is %f\n", area);

	// Using radius as int data type
	int radiusInt = 5;
	printf("Area of circle is %f\n", Area(radiusInt));

	// Example of predefined macros
	printf("This is line no.: %d\n", __LINE__);
	printf("Name of this file: %s\n", __FILE__);
	printf("Current Date: %s\n", __DATE__);
	printf("Current Time: %s\n", __TIME__);
	printf("Compilation success: %d\n", __STDC__);

	return 0;
}
