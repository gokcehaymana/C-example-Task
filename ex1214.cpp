#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int size = 40;
    int bubble[size];
    int inner, outer, temp, x;

    srand((unsigned)time(NULL));
    /* Display original array */
    puts("Original Array:");
    for (x = 0;x < size;x++)
    {
        /* keep the value between 1 and 100 */
        bubble[x] = rand() % 100 + 1;
        printf("%d\t", bubble[x]);
    }
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