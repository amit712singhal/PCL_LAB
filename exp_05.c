/*
Write a program to input basic salary of an employee &
calculate its gross salary acc. to following -->

    Basic salary <= 10,000      HRA = 20%       DA = 80%
    Basic salary <= 20,000      HRA = 25%       DA = 90%
    Basic salary > 20,000       HRA = 30%       DA = 95%
*/

#include <stdio.h>

int main()
{
    float bs, hra, da, gs;
    printf("Enter the Basic Salary: ");
    scanf("%f", &bs);

    if (bs <= 10000)
    {
        hra = bs * 20 / 100.00;
        da = bs * 80 / 100.00;
        gs = bs + hra + da;
        printf("Gross Salary = %f\n", gs);
    }

    else if (bs <= 20000)
    {
        hra = bs * 25 / 100.00;
        da = bs * 90 / 100.00;
        gs = bs + hra + da;
        printf("Gross Salary = %f\n", gs);
    }

    else
    {
        hra = bs * 30 / 100.00;
        da = bs * 95 / 100.00;
        gs = bs + hra + da;
        printf("Gross Salary = %f\n", gs);
    }

    return 0;
}
