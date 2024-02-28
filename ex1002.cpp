#include <stdio.h>

void prompt(void);      /* function prototypes */
void busy(void);

int main()
{
    busy();
    return(0);
}

/* loop five times */

void busy(void)
{
    int loop;
    char input[32];

    loop = 0;
    while (loop < 5)
    {
        prompt();
        fgets(input, 32, stdin);
        loop = loop + 1;
    }
}

/* display prompt */

void prompt(void)
{
    printf("C:\\DOS> ");
}