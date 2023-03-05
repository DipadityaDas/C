// Write a C program to store and display the full name of a candidate.

#include <stdio.h>
#include <string.h>

#define MAX 20

int main(int argc, char const *argv[])
{
	int id;
	char fullname[MAX];

	printf("Enter the ID of the Candidate: ");
	scanf("%d", &id); // Lets say the input is 1\n
	fflush(stdin); // This will flush the buffer 'stdin'.

	printf("Enter the name of the Candidate: ");
	fgets(fullname, MAX, stdin);
	fullname[strlen(fullname) - 1] = 0;

	printf("The details of the Candidate: [%d] %s.", id, fullname);

	return 0;
}
