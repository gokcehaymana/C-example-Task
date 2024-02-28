#include <stdio.h>

int main()
{
    char yorn;

    printf("Do you want to continue (Y/N)? ");
    scanf("%c", &yorn);
    if (yorn == 'Y' || yorn == 'y')
    {
        puts("Continuing...");
    }
    else if (yorn == 'N' || yorn == 'n')
    {
        puts("Stopping now.");
    }
    else
    {
        puts("You didn't type Y or N!");
    }
    return(0);
}