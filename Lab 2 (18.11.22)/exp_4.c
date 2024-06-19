/*
Write a program to input marks of the student &
classify the grade acc to the following -->

    80 - 95     Excellent & GRADE A
    60 - 80     GRADE B
    40 - 60     GRADE C
*/

#include <stdio.h>

int main()
{
    int a;
    printf("Enter marks of the student: ");
    scanf("%d", &a);

    if (a >= 80 && a <= 95)
    {
        printf("Excellent, GRADE A\n");
    }

    else if (a >= 60 && a <= 80)
    {
        printf("GRADE B\n");
    }

    else if (a >= 40 && a <= 60)
    {
        printf("GRADE C\n");
    }

    else
    {
        printf("Very Poor, GRADE D\n");
    }

    return 0;
}
