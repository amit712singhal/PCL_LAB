/*
write a program to store records of a student in student file. the data must be stored using binary file.
read the record stored in "student.txt" file in binary code. edit the record stored in binary file. append a record in the student file
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fptr;
    char name[50], array[10000];
    int marks, i, n;
    printf("Enter number of students whose data you want to record: ");
    scanf("%d", &n);

    fptr = fopen("./files/exp_41_student.txt", "wb+");

    for (i = 0; i < n; ++i)
    {
        printf("------------------------------------------------------\n");
        printf("For student-%d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", name);
        printf("Enter marks: ");
        scanf("%d", &marks);
        fprintf(fptr, "\nName: %s\nMarks:%d \n", name, marks);
    }
    printf("------------------------------------------------------\n");
    printf("Contents of the file are ->\n");

    fseek(fptr, 0, SEEK_SET);

    while (1)
    {
        char ch = fgetc(fptr);
        if (ch == EOF)
            break;
        printf("%c", ch);
    }
    printf("------------------------------------------------------\n");
    fclose(fptr);
    return 0;
}