#include <stdio.h>
#include <stdlib.h>

struct Date
{
    int day;
    int month;
    int year;
};

void show_date(struct Date *pDate);

int main(void)
{
    struct Date exam_date = {1, 2, 2023};
    struct Date *p_exam_date = 0;

    p_exam_date = (struct Date *)malloc(sizeof(struct Date));
    if (p_exam_date == NULL)
    {
        puts("Error in allocating memory");
        exit(EXIT_FAILURE);
    }

    p_exam_date->day = 30;
    p_exam_date->month = 3;
    p_exam_date->year = 2023;

    show_date(&exam_date);
    show_date(p_exam_date);

    free(p_exam_date);
    p_exam_date = 0;
    return (0);
}

void show_date(struct Date *pDate)
{
    printf("%d-%d-%d\n", pDate->day, pDate->month, pDate->year);
}
