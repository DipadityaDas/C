# include <stdio.h>

int main()
{
	// Variables need to be declared before using it.
	// C complier checks the program from the begining and will show an error
	// if the variable is used before declaration
	int a = 22;
	int b = a;
	int c = b * 6;
	int d = 1, e;

	int OldAge = 22;
	int years = 2;
	int NewAge = OldAge + years;

	int x, y, z;
	x = y = z = 1; // The value of x, y and z will be 1.

	int p = q = r = 4;
	/*
	The above line will throw an error because
	we are using q and r before declaring it
	*/
	printf("%d %d %d", p, q, r);

	return 0;
}