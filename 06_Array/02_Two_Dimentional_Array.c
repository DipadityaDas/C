/*********************************************************************************************************************
 * Two Dimensional Array in C
 *
 * Two Dimensional Arrays can be thought of as an array of arrays or as a matrix consisting of rows and columns.
 * Following is an example of a 2D array:
 *  1	7	2
 *  9	3	8
 * This array has 2 rows and 3 columns.
 *
 * A two-dimensional array in C will follow zero-based indexing, like all other arrays in C.
 *
 * Syntax:
 * Now we will review the syntax for declaring a Two-dimensional array in C.
 * data_type array_name[i][j]
 *
 * Example:
 * int A[10][20];
 * Here we declare a two-dimensional array in C, named A which has 10 rows and 20 columns.
 *
 * Initializing Two – Dimensional Array in C
 * We can initialize a two-dimensional array in C in any one of the following two ways:
 * Method 1 - We can use the syntax below to initialize a two-dimensional array in C of size x * y without using
 *        any nested braces.
 *        Let us understand this with the below example:
 *        int A[2][3] = {3, 2, 1, 8, 9, 10}
 *        So we will have an array of size 2 * 3 with the above initialization. Let us see how the elements will be filled:
 *        1. From left to right, the first three elements will be on the first row.
 *        2. Fourth to the last element, in the order of left to right, will be filled on the second row.
 *
 * Method 2 - A two-dimensional array in C can also be initialized using nested braces, which makes the visualization of
 *        each row and column a bit easier.
 *        The syntax is as follows -
 *        int Arr[x][y] = {{ele 1, ele 2, .. ele y} , {......} , {..., ele xy-1, ele xy}};
 *        Let us see by an example how we can use nested braces to implement the above:
 *        int A[2][3] = {{3, 2, 1}, {8, 9, 10}};
 *        Each nested brace denotes a single row, with the elements from left to right being the order of elements
 *        in the columns in our 2d array. Thus, the Number of nested braces = the Number of rows.
 *
 * Accessing Elements of Two-Dimensional Arrays in C
 * Elements in 2D arrays are accessed using row indexes and column indexes. Each element in a 2D array can be referred to by:
 * Syntax:
 * array_name[i][j]
 * where,
 * i: The row index.
 * j: The column index.
 *
 * Size of Multidimensional Arrays:
 * Size of array int x[10][20] = 10 * 20 * 4  = 800 bytes.      (where int = 4 bytes)
 *
 */

// Write a C Program to declare 2D array, store and print all the elements of 2D Array.

#include <stdio.h>

int main(void)
{
	int i, j;
	// an array with 3 rows and 2 columns.
	int x[3][2] = {{0, 1}, {2, 3}, {4, 5}};

	// output each array element's value
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("Element at x[%i][%i]: ", i, j);
			printf("%d\n", x[i][j]);
		}
	}

	int A[2][3] = {0};

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Element at A[%i][%i]: ", i, j);
			printf("%d\n", A[i][j]);
		}
	}

	int arr[2][3] = {{3, 2, 1}, {8, 9, 10}};
	int *p[2];
	p[0] = arr[0]; // Pointer points to first row of 2D array
	p[1] = arr[1]; // Pointer points to second row of 2D array
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}

	return (0);
}
