#include <stdio.h>

int main()
{
    const int size = 6;
    int bubble[] = { 95, 60, 6, 87, 50, 24 };
    int inner, outer, temp, x;

    /* Display original array */
    puts("Original Array:");
    for (x = 0;x < size;x++)
        printf("%d\t", bubble[x]);
    putchar('\n');

    /* Bubble sort */
    for (outer = 0;outer < size - 1;outer++)
    {
        for (inner = outer + 1;inner < size;inner++)
        {
            if (bubble[outer] > bubble[inner])
            {
                temp = bubble[outer];
                bubble[outer] = bubble[inner];
                bubble[inner] = temp;
            }
        }
    }

    /* Display sorted array */
    puts("Sorted Array:");
    for (x = 0;x < size;x++)
        printf("%d\t", bubble[x]);
    putchar('\n');

    return(0);
}