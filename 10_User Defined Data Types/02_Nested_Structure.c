/******************************************************************************************************************
 * Introduction to Nested Structure in C
 *
 * The structure is a user-defined data type used to store a group of items of different data types as a single
 * data type. Each element of a structure is known as its member.
*/
#include <stdio.h>
#include <string.h>

// normal structure
struct incomeInLPA
{
	int base_salary;
	int ctc;
	int bonus;
};

// nested structure
struct employee
{
	char name[30];
	int employeeid;
	struct incomeInLPA inc; /* structure within structure or nested structure */
};

int main()
{
	struct incomeInLPA inc = {13, 27, 3};	 // nested structure initialized
	struct employee emp = {"Mike", 92, inc}; // main structure initialized
	return 0;
}