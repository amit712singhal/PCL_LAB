// Write a recursive program to print first m Fibonacci numbers

#include <stdio.h>

long int fibonacci(int);

void main()
{
    int how_many;
    printf(" I want table of fibonacci series upto: ");
    scanf("%d", &how_many);

    for (int i = 0; i <= how_many-1; i++)
        printf(" %d.\t%ld\n", i+1, fibonacci(i));
}

long int fibonacci(int n)
{
    if (n <= 1)
        return n;

    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}
