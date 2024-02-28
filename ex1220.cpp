#include <stdio.h>

int main()
{
    int const size = 6;
    char caesar[size][9] = {
        "Julius",
        "Augustus",
        "Tiberius",
        "Caligula",
        "Claudius",
        "Nero"
    };
    int x;

    for (x = 0;x < size;x++)
        puts(caesar[x]);
    return(0);
}