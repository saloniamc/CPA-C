#include <stdio.h>
#include <stdlib.h>

struct Date
{
    int day;
    int month;
    int year;
};

void get_date(struct Date **ppdate);
void show_date(struct Date *pdate);
void release_date(struct Date **ppdate);

int main(void)
{
    struct Date *pdate = 0;

    get_date(&pdate);
    show_date(pdate);
    release_date(&pdate);

    return (0);
}

void get_date(struct Date **ppdate)
{
    struct Date *pdate = 0;
    int day, month, year;

    printf("Enter day:");
    scanf("%d", &day);

    printf("Enter month:");
    scanf("%d", &month);

    printf("Enter year:");
    scanf("%d", &year);

    pdate = (struct Date *)malloc(sizeof(struct Date));
    if (pdate == NULL)
    {
        puts("Error in allocating the memory");
        exit(EXIT_FAILURE);
    }

    pdate->day = day;
    pdate->month = month;
    pdate->year = year;

    *ppdate = pdate;
}

void show_date(struct Date *pdate)
{
    // printf("%d-%d-%d\n", pdate->day, pdate->month, pdate->year);
    printf("%d-%d-%d\n", pdate->day, pdate->month, pdate->year);
}

void release_date(struct Date **ppdate)
{
    free(ppdate);
    ppdate = 0;
}
