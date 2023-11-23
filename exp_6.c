// Write a program to count total number of notes in given amount

#include <stdio.h>

int main()
{
    int am, total;
    int note2000, note500, note200, note100, note50, note20, note10, note5, note2, note1;

    note2000 = note500 = note200 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;

    printf("Enter the Amount: ");
    scanf("%d", &am);

    if (am >= 2000)
    {
        note2000 = am / 2000;
        am = am - note2000 * 2000;
    }

    if (am >= 500)
    {
        note500 = am / 500;
        am = am - note500 * 500;
    }

    if (am >= 200)
    {
        note200 = am / 200;
        am = am - note200 * 200;
    }

    if (am >= 100)
    {
        note100 = am / 100;
        am = am - note100 * 100;
    }

    if (am >= 50)
    {
        note50 = am / 50;
        am = am - note50 * 50;
    }

    if (am >= 20)
    {
        note20 = am / 20;
        am = am - note20 * 20;
    }

    if (am >= 10)
    {
        note10 = am / 10;
        am = am - note10 * 10;
    }

    if (am >= 5)
    {
        note5 = am / 5;
        am = am - note5 * 5;
    }

    if (am >= 2)
    {
        note2 = am / 2;
        am = am - note2 * 2;
    }

    if (am >= 1)
    {
        note1 = am;
    }

    total = note2000 + note500 + note200 + note100 + note50 + note20 + note10 + note5 + note2 + note1;
    printf("2000 notes : %d\n", note2000);
    printf("500 notes  : %d\n", note500);
    printf("200 notes  : %d\n", note200);
    printf("100 notes  : %d\n", note100);
    printf("50 notes   : %d\n", note50);
    printf("20 notes   : %d\n", note20);
    printf("10 notes   : %d\n", note10);
    printf("5 notes    : %d\n", note5);
    printf("2 notes    : %d\n", note2);
    printf("1 notes    : %d\n", note1);
    printf("Total number of notes = %d\n", total);

    return 0;
}
