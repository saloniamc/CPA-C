#include <stdio.h>
#include <stdlib.h>

struct date
{
    int day;
    int month;
    int year;
};

int main(void)
{
    struct date examDate;
    struct date *pexamdate;
    int dd, mm, yy;

    pexamdate = &examDate;

    (*pexamdate).day = 5;
    (*pexamdate).month = 12;
    (*pexamdate).year = 2022;

    dd = (*pexamdate).day;
    mm = (*pexamdate).month;
    yy = (*pexamdate).year;

    printf("%d-%d-%d\n", dd, mm, yy);

    return (0);
}