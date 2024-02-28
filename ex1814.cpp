#include <stdio.h>

int main()
{
    int age;
    float weight;
    int* a;
    float* w;

    a = &age;                /* initialize the pointers */
    w = &weight;

    *a = 39;                 /* set the values using */
    *w = 83.9;               /*  the pointers */

    printf("You are %d years old ", age);
    printf("and you weigh %.1f kilos.\n", weight);

    return(0);
}