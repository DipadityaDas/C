/************************************************************************************************
 * Void Pointer in C
 * 
 * The void pointer is a generic pointer that isn't associated with any data type. 
 * A void pointer can be typecasted to any type, so it is instrumental in assigning the different 
 * types of variables to the void pointer.
 */

#include <stdio.h>

int main()
{
	void *ptr = NULL; // void pointer
	int x = 5;
	ptr = &x;
	
	// typecasted to int using (int *)
	printf("value of *ptr is %d ", *(int *)ptr);

	return 0;
}
