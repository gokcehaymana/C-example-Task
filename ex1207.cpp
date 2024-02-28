#include <stdio.h>
#include <math.h>

int main()
{
    const int size = 7;
    int first[] = { 10, 12, 14, 15, 16, 18, 20 };
    float second[size];
    int x;

    for (x = 0;x < size;x++)
        second[x] = sqrt(first[x]);

    for (x = 0;x < size;x++)
        printf("The square root of %d is %.2f\n", first[x], second[x]);
    return(0);
}