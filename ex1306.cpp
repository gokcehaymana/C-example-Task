#include <stdio.h>
#include <ctype.h>

int main()
{
    char text[] = "ThiS Is a RANsom NoTE!";
    int index;
    char c;

    printf("Original: %s\n", text);
    index = 0;
    while (text[index])
    {
        c = text[index];
        if (islower(c))
            text[index] = toupper(c);
        else if (isupper(c))
            text[index] = tolower(c);
        else
            text[index] = c;
        index++;
    }
    printf("Modified: %s\n", text);
    return(0);
}