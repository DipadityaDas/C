/****************************************************************************************************************************************
 * Recursion in C
 * Recursion is the process which comes into existence when a function calls a copy of itself to work on a smaller problem.
 * Any function which calls itself is called recursive function, and such function calls are called recursive calls.
 * Recursion involves several numbers of recursive calls. However, it is important to impose a termination condition of recursion.
 * Recursion code is shorter than iterative code however it is difficult to understand.
 *
 * Generally, iterative solutions are more efficient than recursion since function call is always overhead.
 * Any problem that can be solved recursively, can also be solved iteratively. However, some problems are best suited to be solved
 * by the recursion, for example, tower of Hanoi, Fibonacci series, factorial finding, etc.
 *
 * A recursive function performs the tasks by dividing it into the subtasks. There is a termination condition defined in the function
 * which is satisfied by some specific subtask. After this, the recursion stops and the final result is returned from the function.
 *
 * The case at which the function doesn't recur is called the base case whereas the instances where the function keeps calling
 * itself to perform a subtask, is called the recursive case. All the recursive functions can be written using this format.
 *
 * Each recursive call creates a new copy of that method in the memory.
 * Once some data is returned by the method, the copy is removed from the memory.
 * Since all the variables and other stuff declared inside function get stored in the stack, therefore a separate stack is maintained
 * at each recursive call. Once the value is returned from the corresponding function, the stack gets destroyed.
 * Recursion involves so much complexity in resolving and tracking the values at each recursive call.
 * Therefore we need to maintain the stack and track the values of the variables defined in the stack.
 * 
 * Anything that can be done with Iteration, can be done with recursion and vice-versa.
 * Recursion can sometimes give the most simple solution.
 * Base Case is the condition which stops recursion.
 * Iteration has infinite loop & Recursion has stack overflow.
 */

#include <stdio.h>

int fib(int n)
{
	if (n <= 1)
		return n;
	return fib(n - 1) + fib(n - 2);
}

int main()
{
	int n = 0;

	printf("Enter the nth term of Fibonacci Series: ");
	scanf("%d", &n);
	printf("The %dth Fibonacci Term: %d.\n", n, fib(n));

	return 0;
}