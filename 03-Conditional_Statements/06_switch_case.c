/********************************************************************************************************************************
 * Switch statement in C tests the value of a variable and compares it with multiple cases. Once the case match is found,
 * a block of statements associated with that particular case is executed.
 *
 * The syntax of switch...case conditional block :
	switch( expression )
	{
		case value-1:
				Block-1;
				break;
		case value-2:
				Block-2;
				break;
		case value-n:
				Block-n;
				break;
		default:
				Block-1;
				Break;
	}
	Statement-x;
 *
 * 1. The expression can be integer expression or a character expression.
 * 2. Value-1, 2, n are case labels which are used to identify each case individually. Remember that case labels should not be
 *    same as it may create a problem while executing a program. Suppose we have two cases with the same label as ‘1’.
 * 	  Then while executing the program, the case that appears first will be executed even though you want the program to execute
 *    a second case. This creates problems in the program and does not provide the desired output.
 * 3. Case labels always end with a colon ( : ). Each of these cases is associated with a block.
 * 4. A block is nothing but multiple statements which are grouped for a particular case.
 * 5. Whenever the switch is executed, the value of test-expression is compared with all the cases which we have defined inside
 *    the switch. Suppose the test expression contains value 4. This value is compared with all the cases until case whose label
 *    four is found in the program. As soon as a case is found the block of statements associated with that particular case is
 *    executed and control goes out of the switch.
 * 6. The break keyword in each case indicates the end of a particular case. If we do not put the break in each case then even
 *    though the specific case is executed, the switch in C will continue to execute all the cases until the end is reached.
 *    This should not happen; hence we always have to put break keyword in each case. Break will terminate the case once it
 *    is executed and the control will fall out of the switch.
 * 7. The default case is an optional one. Whenever the value of test-expression is not matched with any of the cases inside
 *    the switch, then the default will be executed. Otherwise, it is not necessary to write default in the switch.
 * 8. Once the switch is executed the control will go to the statement-x, and the execution of a program will continue.
 */

// Write a program to print day of week name using a menu-driven approach.

#include <stdio.h>

int main()
{
	int day;

	printf("Enter the day number(1-7): ");
	scanf("%d", &day);

	switch (day)
	{
	case 1:
		printf("Monday");
		break;
	case 2:
		printf("Tuesday");
		break;
	case 3:
		printf("Wednesday");
		break;
	case 4:
		printf("Thursday");
		break;
	case 5:
		printf("Friday");
		break;
	case 6:
		printf("Saturday");
		break;
	case 7:
		printf("Sunday");
		break;
	default:
		printf("Invalid input! Please enter week number between 1-7.");
	}

	return 0;
}