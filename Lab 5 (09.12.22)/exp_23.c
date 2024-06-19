// WAP to find diameter, circumference and area of circle using functions

#include <stdio.h>

float diameter(float);
double circumference(float);
double area(float);

static double PI = 3.14159265;

void main()
{
    float radius;
    printf(" Enter Radius of a Circle: ");
    scanf("%f", &radius);

    printf(" Diameter of the Circle is %f\n", diameter(radius));

    printf(" Circumference of the Circle is %lf\n", circumference(radius));

    printf(" Area of the Circle is %lf\n", area(radius));
}

float diameter(float r)
{
    return 2 * r;
}

double circumference(float r)
{
    return 2 * PI * r;
}

double area(float r)
{
    return PI * r * r;
}
