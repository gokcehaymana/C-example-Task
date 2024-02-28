#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* a, x;

    /* allocate storage */
    a = (int*)malloc(sizeof(int) * 3);
    if (a == NULL)
    {
        puts("Unable to allocate memory");
        exit(1);
    }

    /* assign values */
    for (x = 0;x < 3;x++)
    {
        /* generate values */
        *(a + x) = (x + 1) * 100;
        /* output the values */
        printf("%d\n", *(a + x));
    }

    return(0);
}