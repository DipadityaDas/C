// Write a C program to find the area of a Square, circle and rectangle using separate functions.

#include <stdio.h>

float areaSquare(float);
float areaRectangle(float, float);
float areaCircle(float);

int main()
{
	float length, breadth, radius;

	// Square
	printf("Enter the Side of a Square: ");
	scanf("%f", &length);
	printf("Area of the Square = %f\n", areaSquare(length));

	// Rectangle
	printf("Enter the Length of a Rectangle: ");
	scanf("%f", &length);
	printf("Enter the Breadth of a Rectangle: ");
	scanf("%f", &breadth);
	printf("Area of the Rectangle = %f\n", areaRectangle(length, breadth));

	printf("Enter the Radius of a Circle: ");
	scanf("%f", &radius);
	printf("Area of a Circle = %f\n", areaCircle(radius));
	return 0;
}

float areaSquare(float side)
{
	return side * side;
}

float areaRectangle(float length, float breadth)
{
	return length * breadth;
}

float areaCircle(float radius)
{
	return (22.0 / 7.0) * radius * radius;
}
