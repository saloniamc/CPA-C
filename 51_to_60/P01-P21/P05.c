#include <stdio.h>
#include <stdlib.h>

struct Date
{
    int day;
    int month;
    int year;
};

void initialize(struct Date *pDate, int init_day, int init_month, int init_year);
void show_date(struct Date *pDate);

int main(void)
{
    struct Date exam_date;
    struct Date *p_exam_date = 0;

    p_exam_date = (struct Date *)malloc(sizeof(struct Date));
    if (p_exam_date == NULL)
    {
        puts("error allocating the memory");
        exit(-1);
    }

    initialize(&exam_date, 1, 2, 2023);
    initialize(p_exam_date, 30, 3, 2023);

    show_date(&exam_date);
    show_date(p_exam_date);

    free(p_exam_date);
    p_exam_date = 0;
    return (0);
}

void initialize(struct Date *pDate, int day, int month, int year)
{
    pDate->day = day;
    pDate->month = month;
    pDate->year = year;
}

void show_date(struct Date *pDate, int day, int month, int year)
{
    printf("%d-%d-%d\n", pDate->day, pDate->month, pDate->year);
}
