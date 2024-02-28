#include <stdio.h>
#include <stdlib.h>

int main()
{
    char filename[255];
    FILE* dumpme;
    int x, c;

    printf("File to dump: ");
    scanf("%s", filename);
    dumpme = fopen(filename, "r");
    if (!dumpme)
    {
        printf("Unable to open '%s'\n", filename);
        exit(1);
    }
    x = 0;
    while (!feof(dumpme))
    {
        c = fgetc(dumpme);
        if (c == EOF)
            break;
        printf("%02X ", c);
        x++;
        if (!(x % 16))
            putchar('\n');
    }
    putchar('\n');
    fclose(dumpme);
    return(0);
}