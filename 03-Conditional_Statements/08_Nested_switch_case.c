/************************************************************************************************************************
 * In C, we can have an inner switch embedded in an outer switch. Also, the case constants of the inner and outer switch
 * may have common values and without any conflicts.
 *
 * We considere the following program which the user to type his own ID, if the ID is valid it will ask him to enter
 * his password, if the password is correct the program will print the name of the user, otherwise ,the program will
 * print Incorrect Password and if the ID does not exist , the program will print Incorrect ID
 */

#include <stdio.h>
int main()
{
	int ID = 1000;
	int password = 000;
	
	printf("Plese Enter Your ID:\n ");
	scanf("%d", &ID);
	
	switch (ID)
	{
	case 1000:
		printf("Enter your password:\n ");
		scanf("%d", &password);
		
		switch (password)
		{
		case 000:
			printf("Welcome Dear Programmer\n");
			break;
		default:
			printf("incorrect password");
			break;
		}
		break;
	default:
		printf("incorrect ID");
		break;
	}
}