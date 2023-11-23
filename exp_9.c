// Write a program to test whether a number entered is +ve, -ve or zero

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("The Number is POSITIVE\n");
    }

    else if (num < 0)
    {
        printf("The Number is NEGATIVE\n");
    }

    else
    {
        printf("The Number is ZERO\n");
    }

    return 0;
}
