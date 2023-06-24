/********************************************************************************************************************
 * Structure in C Programming Language
 *
 * Structure in C is a user-defined data type. It is used to bind two or more similar or different data types or
 * data structures together into a single type. The structure is created using the struct keyword, and a structure
 * variable is created using the struct keyword and the structure tag name. A data type created using structure in C
 * can be treated as other primitive data types of C to define a pointer for structure, pass structure as a function
 * argument or a function can have structure as a return type.
 */

#include <stdio.h>
#include <string.h>

struct Student
{
	char name[50];
	int class;
	char section;
};

int main()
{
	// created variable student1 for structure Student
	struct Student student1;

	// accessing student1 member and initializing them
	strcpy(student1.name, "Student_name");
	student1.class = 1;
	student1.section = 'A';

	// printing values
	printf("Student Name : %s\n", student1.name);
	printf("Student Class : %d\n", student1.class);
	printf("Student Section : %c\n", student1.section);

	return 0;
}