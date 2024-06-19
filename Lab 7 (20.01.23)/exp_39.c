// write a program to copy one file to other, use command line arguments

/* run the follwing commands in terminal for successful execution
gcc exp_39.c -o exp_39
./exp_39 ./files/exp_39_src_file.bin ./files/exp_39_dest_file.bin
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: %s <src_file> <dest_file>\n", argv[0]);
        return 1;
    }

    char *src_file = argv[1];
    char *dest_file = argv[2];

    FILE *src = fopen(src_file, "rb");
    if (!src)
    {
        printf("Failed to open %s\n", src_file);
        return 1;
    }

    FILE *dest = fopen(dest_file, "wb");
    if (!dest)
    {
        printf("Failed to open %s\n", dest_file);
        fclose(src);
        return 1;
    }

    char buffer[1024];
    size_t bytes;
    while ((bytes = fread(buffer, 1, sizeof(buffer), src)) > 0)
    {
        fwrite(buffer, 1, bytes, dest);
    }
    printf("Copying Files Successful, check the contents of dest_file now...\n");
    fclose(src);
    fclose(dest);
    return 0;
}
