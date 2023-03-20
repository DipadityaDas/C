/********************************************************************************************************************
 * Arrays in C
 *
 * An array is a collection of one or more values of the same data type stored in contiguous memory locations.
 * The data type can be user-defined or even any other primitive data-type. Elements of an array can be accessed
 * with the same array name by specifying the index number as the location in memory.
 *
 * Arrays in C are classified into three types:
 * 1. One-dimensional arrays
 * 2. Multi-dimensional arrays
 *
 * Advantage of Array:
 * 1) Code Optimization: Less code to the access the data.
 * 2) Ease of traversing: By using the for loop, we can retrieve the elements of an array easily.
 * 3) Ease of sorting: To sort the elements of the array, we need a few lines of code only.
 * 4) Random Access: We can access any element randomly using the array.
 *
 * Disadvantage of Array:
 * 1) Fixed Size: Whatever size, we define at the time of declaration of the array, we can't exceed the limit.
 *    So, it doesn't grow the size dynamically like LinkedList which we will learn later.
 *
 * Introduction to One Dimensional Array in C -
 * An array in C/C++ or be it in any programming language is a collection of similar data items stored at contiguous
 * memory locations and elements can be accessed randomly using indices of an array.
 * They can be used to store the collection of primitive data types such as int, float, double, char, etc of any
 * particular type. To add to it, an array in C/C++ can store derived data types such as structures, pointers etc.
 * Given below is the picture representation of an array.
 * https://www.geeksforgeeks.org/arrays-in-c-cpp/
 *
 * Array Declaration:
 * While declaring a one-dimensional array in C, the data type can be of any type, and also, we can give any name
 * to the array, just like naming a random variable.
 * Syntax:
 * int arr[5]; //arr is the array name of type integer, and 5 is the size of the array
 *
 * Array Initialization:
 * In static uninitialized arrays, all the elements initially contain garbage values, but we can explicitly initialize
 * them at their declaration.
 * Syntax:
 * <data_type> <arr_name> [arr_size]={value1, value2, value3,…};
 *
 * Here, parameterized values are constant values separated by a comma.
 * We can skip the writing size of the array within square brackets if we initialize array elements explicitly within
 * the list at the time of declaration. In that case, it will pick elements list size as array size.
 *
 * Example:
 * int nums[5] = {0, 1, 2, 3, 4}; //array nums is initialized with elements 0,1,2,3,4
 *
 * If we want to initialize all elements of an integer array to zero, we could simply write:
 * int <array name>[size] = {0};
 *
 * Array Accessing:
 * In one-dimensional arrays in C, elements are accessed by specifying the array name and the index value within the
 * square brackets. Array indexing starts from 0 and ends with size-1. If we try to access array elements out of the
 * range, the compiler will not show any error message; rather, it will return some garbage value.
 *
 * Syntax:
 * <arr_name>[index];
 *
 * Example:
 * int nums[5] = {0, 1, 2, 3, 4};
 * printf("%d", nums[0]); //Array element at index 0 is printed
 * printf("%d", nums[-1]); //Garbage value will be printed
 * 
 * Points to Remember About Array in C :
 * 1) Arrays in C are a collection of similar data-type elements stored at contiguous memory locations.
 * 2) In arrays in C, all the elements have the same data type and can be accessed by their unique index value.
 * 3) Array indexing starts from 0 and ends with size-1.
 * 4) One-dimensional arrays in C can be initialized statically (during compile-time) or dynamically (during runtime).
 * 5) We must include the data type, variable name for the array, and size of the array in square brackets while 
 *    declaring one-dimensional arrays in C.
 * 6) Arrays in C are derived data types containing similar data-type elements.
 * 7) In one-dimensional arrays in C, indexing starts from 0 and ends at size-1, and if we try to access an element 
 *    out of range, it will return garbage value.
 * 8) We must include a data type, variable name for array, and array size in square brackets while declaring 
 *    one-dimensional arrays in C.
 * 9) One-dimensional arrays in C can be initialized statically (during compile-time) or dynamically (during runtime).
 * 10) All the elements of an array are stored at contiguous memory locations, and therefore, we can access them 
 *     using their unique index number.
 *
 */

#include <stdio.h>

int main(void)
{
	int arr1[5] = {0};

	printf("The elements in the array arr: \n");
	for (int i = 0; i < 5; i++)
	{
		printf("arr1[%d] = %d\n", i, arr1[i]);
	}

	int arr2[5] = {1};

	printf("The elements in the array arr: \n");
	for (int i = 0; i < 5; i++)
	{
		printf("arr2[%d] = %d\n", i, arr2[i]);
	}

	int nums[5];
	printf("\n Run-Time Initialization Example:\n");
	printf("\n Enter array elements: ");

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &nums[i]);
	}

	printf(" Accessing array elements after dynamic Initialization: ");

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", nums[i]);
	}

	int array1[5] = {10, 20, 30, 40, 50};
	int array2[5];

	printf("Copying One-Dimensional Arrays in C:\n");
	printf("Array1 elements: ");

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", array1[i]);
		array2[i] = array1[i]; // Copying array1 elements to array2
	}

	printf("\nArray2 elements after copying: ");

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", array2[i]);
	}

	return 0;
}
