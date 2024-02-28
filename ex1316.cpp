#include <stdio.h>

int main()
{
    int i;

    do
    {
        i = getchar();
        putchar(i);
    } while (i != '.');

    putchar('\n');
    return(0);
}