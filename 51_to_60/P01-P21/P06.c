#include <stdio.h>
#include <stdlib.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Date *get_date(void);

int main(void)
{
    struct Date *p = 0;

    p = get_date();
    printf("%d-%d-%d\n", p->day, p->month, p->year);

    free(p);
    p = 0;
    return (0);
}

struct Date *get_date(void)
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

    return (pdate);
}