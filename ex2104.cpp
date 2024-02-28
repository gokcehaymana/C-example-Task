#include <stdio.h>
#include <time.h>

int main()
{
    time_t tictoc;

    tictoc = 946684800;
    printf("The time is now %s", ctime(&tictoc));
    return(0);
}