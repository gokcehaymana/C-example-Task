#include <stdio.h>

int main()
{
    enum weekdays { mon, tues, wed, thurs, fri };
    float temps[5] = { 18.7, 22.8, 25.0, 23.3, 23.2 };
    float* t;

    t = temps;                /* initialize the pointer */
    printf("The temperature on Tuesday was %.1f\n",
        *(t + tues));
    printf("The temperature on Friday was %.1f\n",
        *(t + fri));
    return(0);
}