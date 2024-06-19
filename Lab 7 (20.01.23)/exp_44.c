// wrtie a c program to find and replace a word in a text file

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 1000
#define MAX_WORD_LENGTH 100

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Usage: %s <filename> <search_word> <replace_word>\n", argv[0]);
        return 1;
    }

    char *filename = argv[1];
    char *search_word = argv[2];
    char *replace_word = argv[3];

    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    char line[MAX_LINE_LENGTH];
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL)
    {
        char *occurrence = strstr(line, search_word);
        if (occurrence != NULL)
        {
            char new_line[MAX_LINE_LENGTH];
            strncpy(new_line, line, occurrence - line);
            new_line[occurrence - line] = '\0';
            strcat(new_line, replace_word);
            strcat(new_line, occurrence + strlen(search_word));
            strcpy(line, new_line);
        }
        printf("%s", line);
    }

    fclose(file);
    return 0;
}