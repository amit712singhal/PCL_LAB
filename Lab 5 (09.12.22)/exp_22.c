// WAP to find cube of any number using function

#include <stdio.h>

long int cube(int);

void main()
{
    int num;
    printf(" Enter the number: ");
    scanf("%d", &num);

    printf(" Cube of the given number is %ld\n", cube(num));
}

long int cube(int n)
{
    return n * n * n;
}