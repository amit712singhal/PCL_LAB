// WAP to find maximum & minimum between two numbers using functions

#include <stdio.h>

int max(int, int);
int min(int, int);

void main()
{
    int num1, num2;
    printf(" Enter Ist Number: ");
    scanf("%d", &num1);
    printf(" Enter IInd Number: ");
    scanf("%d", &num2);

    printf(" Maximum = %d\n", max(num1, num2));
    printf(" Minimum = %d\n", min(num1, num2));
    
    if (num1 == num2)
    	printf(" EQUAL NUMBERS\n");
}

int max(int num1, int num2)
{
    if (num1 > num2)
        return num1;

    else
        return num2;
}

int min(int num1, int num2)
{
    if (num1 < num2)
        return num1;

    else
        return num2;
}