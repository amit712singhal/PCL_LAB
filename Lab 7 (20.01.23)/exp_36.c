// write a program in c to print all permutations of a given str using pointers

#include <stdio.h>
#include <string.h>

void change_Position(char *ch1, char *ch2)
{
    char temp;
    temp = *ch1;
    *ch1 = *ch2;
    *ch2 = temp;
}
void Permutation(char *str, int start, int end, int *counter)
{
    if (start == end)
    {
        printf("%s  ", str);
        (*counter)++;
        if (*counter % 15 == 0)
            printf("\n");
    }
    else
    {
        for (int i = start; i <= end; i++)
        {
            change_Position((str + start), (str + i));
            Permutation(str, start + 1, end, counter);
            change_Position((str + start), (str + i));
        }
    }
}

int main()
{
    char str[10];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    printf("Permutations of the string are -> \n");
    int counter = 0;
    Permutation(str, 0, len - 1, &counter);
    printf("\n");
    return 0;
}
