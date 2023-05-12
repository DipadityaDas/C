/******************************************************************************************************************************
 * goto statement in c
 * goto is a jump statement used to transfer program control unconditionally from one part of a function to another.
 * I have used the word unconditionally because there is no restriction on control transfer.
 * You can transfer program control from one position to any position within a function.
 * Many programmers uses goto to gain full control on their program.
 *
 * goto is divided in two parts, label definition and goto keyword.
 * 1. Label is a valid C identifier followed by colon symbol :. Label specifies control transfer location.
 *    Each label work as a bookmark to specific location. You are free to define any number of labels anywhere inside a function.
 * 2. goto is a keyword used along with label name to transfer program control to the mentioned label.
 *    You can only transfer program control to a label within same function. Cross function control transfer,
 * 	  using goto is not possible and results in compilation error.
 *
 * There is no restriction in order of goto and label. You are free to define a label anywhere inside a function.
 */

// Write a C program to demonstrate usage of goto

#include <stdio.h>

int main()
{
	int i, j, k;

	for(i=1; i<=10; i++)
	{
		for(j=1; j<=10; j++)
		{
			k = 1;
			while(k<=10)
			{
				if(j==5 && k==5)
				{
					goto out_of_loop;
				}
				printf("%d ", k);
				k++;
			}
			printf("\n");
		}
	}
	out_of_loop:

	return 0;
}