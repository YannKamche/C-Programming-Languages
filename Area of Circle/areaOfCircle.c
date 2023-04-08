/*
This program computes the area of a circle of given radius*/

#include <stdio.h> //Preprocessor
#define PI 3.14159 //Defines a constant value

int main()
{
    double radius; // The radius of the circle

    printf("Enter the radius of the circle: 34"); // User Prompt
    scanf("%lf", &radius);

    double area = PI * (radius * radius); // Computes the area

    printf("The area of a circle with radius %lf is : %lf", radius, area);
    
    return 0;
        
}