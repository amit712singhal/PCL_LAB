/*

Write a program to -->
1. Print your Name
2. Read two numbers & print their sum
3. Read two numbers & divide them

*/

#include <stdio.h>

int main()
{
	int a, b;
	float c, d;

	printf("My Name is Amit Singhal \n");

	printf("Enter two numbers [int]: ");
	scanf("%d %d", &a, &b);
	printf("Sum is %d \n", a + b);

	printf("Enter two numbers [float]: ");
	scanf("%f %f", &c, &d);
	printf("Quotient is %f \n", c / d);

	return 0;
}
