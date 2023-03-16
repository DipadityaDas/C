// Dangling Pointers using dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>

int main()
{

    // 4 bytes of int memory block (64-bit compiler) allocated using malloc() during runtime
    int *ptr = (int *)malloc(sizeof(int)); // normal pointer

    *ptr = 5;

    // memory block deallocated using free() function
    free(ptr);

    // ptr is a dangling pointer
    // prints garbage value
    printf("%d\n", *ptr);

    // this line added will help us to determine that ptr is not pointing to any location currently
    // this pointer is known as NULL Pointer
    ptr = NULL;

    // not a Dangling Pointer anymore
    // no output value
    printf("%d", *ptr);

    return 0;
}
