#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int bufsize = 1024;
    char* input, * output, * i, * o;

    /* allocate memory */
    input = (char*)malloc(sizeof(char) * bufsize);
    output = (char*)malloc(sizeof(char) * bufsize);
    if (input == NULL || output == NULL)
    {
        puts("Unable to allocate buffer! Oh no!");
        exit(1);
    }

    /* fetch input */
    puts("Type something long and boring:");
    fgets(input, bufsize, stdin);

    /* copy and remove the newline */
    i = input;            /* initialize the index */
    o = output;           /* initialize the index */
    while (*i != '\n')
    {
        *o = *i;
        o++;
        i++;
    }
    *o = '\0';            /* cap the string */

    /* output the result */
    puts("You wrote:");
    printf("\"%s\"\n", output);

    return(0);
}