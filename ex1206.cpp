#include <stdio.h>

int main()
{
    float marketclose[] = { 24164.95, 24107.08, 24643.63, 24400.93, 23728.53 };
    int day;

    puts("Stock Market Close");
    for (day = 0;day < 5;day++)
        printf("Day %d: %.2f\n", day + 1, marketclose[day]);
    return(0);
}