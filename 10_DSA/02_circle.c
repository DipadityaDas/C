// Write a C program to compute the perimeter and area of a circle with a given radius.

#include <stdio.h>

int main()
{
	double r;
	printf("Enter the radius of the circle in m : ");
	scanf("%lf", &r);

	printf("The Circumference of the Circle: %f \n", (44 / 7 * r));
	printf("The Area of the Circle: %f \n", (22 / 7 * r * r));
	return 0;
}