/****************************************************************************************
 * sizeof operator or function prints the size of storage classes or Data types in bytes
 * Note that if we want to use 16 bit int data type then we will use __int16.
 * Similarly, for 32bit we will use __int32, 64 bit -> __int64 and 128 bit -> __int128
 */

#include <stdio.h>
int main()
{
    int a;
    float b;
    double c;
    char d;
    long e;
    long double g;

    printf("Size of char    = %lu byte\n",  sizeof(d));
    printf("Size of int     = %lu bytes\n", sizeof(a));
    printf("Size of float   = %lu bytes\n", sizeof(b));
    printf("Size of double  = %lu bytes\n", sizeof(c));
    printf("Size of long    = %lu bytes\n", sizeof(e));
    printf("Size of long double   = %lu bytes\n", sizeof(g));

    return 0;
}