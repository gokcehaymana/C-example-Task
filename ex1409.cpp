#include <stdio.h>
#include <string.h>

int main()
{
    struct id
    {
        char first[20];
        char last[20];
    };
    struct date
    {
        int month;
        int day;
        int year;
    };
    struct human
    {
        struct id name;
        struct date birthday;
    };
    struct human president;

    strcpy(president.name.first, "George");
    strcpy(president.name.last, "Washington");
    president.birthday.month = 2;
    president.birthday.day = 22;
    president.birthday.year = 1732;

    printf("%s %s was born on %d/%d/%d\n",
        president.name.first,
        president.name.last,
        president.birthday.month,
        president.birthday.day,
        president.birthday.year);

    return(0);
}