// write a program to count the no. of lowercase, uppercase numbers and special characters present in the contents of file

#include <stdio.h>
#include <ctype.h>

const int MAX_SIZE = 1000;

int main()
{
    FILE *fptr;
    char array[MAX_SIZE];
    int upperCount, lowerCount, specialCount, digitCount, i;

    fptr = fopen("./files/exp_42_sample.txt", "r");

    printf("Contents of the file are ->\n");

    for (int i = 0; i < MAX_SIZE; i++)
    {
        char ch = fgetc(fptr);
        if (ch == EOF)
            break;
        printf("%c", ch);
        array[i] = ch;
    }

    upperCount = lowerCount = specialCount = digitCount = 0;

    for (i = 0; array[i] != '\0'; i++)
    {
        if (array[i] >= 'A' && array[i] <= 'Z')
        {
            upperCount++;
        }
        else if (array[i] >= 'a' && array[i] <= 'z')
        {
            lowerCount++;
        }
        else if (array[i] >= '0' && array[i] <= '9')
        {
            digitCount++;
        }
        else
        {
            specialCount++;
        }
    }

    printf("---------------------------------------------------------------------------------\n");
    printf("Upper case count : %d \n", upperCount);
    printf("Lower case count : %d \n", lowerCount);
    printf("Digit count      : %d \n", digitCount);
    printf("Special character count : %d \n", specialCount);
    printf("---------------------------------------------------------------------------------\n");

    fclose(fptr);

    return 0;
}