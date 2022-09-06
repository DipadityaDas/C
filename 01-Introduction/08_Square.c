// Write a program to calculate area of a square.

# include <stdio.h>

int main()
{
	float side;
	printf("Enter the side of the square(in m) = ");
	scanf("%f", &side);

	printf("Area of a Square = %f m^2\n", side * side);
	return 0;
}