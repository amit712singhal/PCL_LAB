// an array of record contains information of managers and workers of a company. print all the data of the managers and workers in separate files.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_RECORDS 10
#define MAX_NAME_LENGTH 50

typedef struct
{
    char name[MAX_NAME_LENGTH];
    int age;
    char position[MAX_NAME_LENGTH];
} Employee;

int main()
{
    Employee records[MAX_RECORDS] = {
        {"Amit Singhal", 25, "Manager"},
        {"Uttkarsh Singh", 43, "Manager"},
        {"Vishal Rathi", 51, "Worker"},
        {"Shaswat Satyam", 28, "Manager"},
        {"Gautam Jha", 44, "Worker"},
        {"Om Lakshaydeep", 45, "Worker"},
        {"Vaibhav Jindal", 20, "Worker"},
        // ... Add more records here ...
    };

    int num_records = 7; // Update this to the actual number of records

    // Open files for writing manager and worker information
    FILE *managers = fopen("./files/exp_40_managers.txt", "w");
    FILE *workers = fopen("./files/exp_40_workers.txt", "w");

    // Write manager and worker information to separate files
    for (int i = 0; i < num_records; i++)
    {
        Employee record = records[i];
        if (strcmp(record.position, "Manager") == 0)
        {
            fprintf(managers, "Name: %s\nAge: %d\nPosition: %s\n\n", record.name, record.age, record.position);
        }
        else
        {
            fprintf(workers, "Name: %s\nAge: %d\nPosition: %s\n\n", record.name, record.age, record.position);
        }
    }

    printf("Files made succesfully, Check your \"files\" folder\n");

    // Close the files
    fclose(managers);
    fclose(workers);

    return 0;
}
