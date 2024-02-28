#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159
#endif

int main()
{
    const float amplitude = 35;
    const float    wavelength = 0.1;
    float graph, s, x;

    for (graph = 0;graph < 2 * M_PI;graph += wavelength)
    {
        s = cos(graph);
        s += 1.0;            /* compensate for negative values */
        for (x = 0;x < s * amplitude;x++)
            putchar('*');
        putchar('\n');
    }
    return(0);
}