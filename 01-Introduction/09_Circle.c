// Write a program to calculate area of a circle.

# include <stdio.h>

int main()
{
	float radius;
	printf("Enter the radius of the circle(in m) = ");
	scanf("%f", &radius);

	printf("Area of the Circle = %f m^2\n", (22.0/7.0) * radius * radius);
	return 0;
}