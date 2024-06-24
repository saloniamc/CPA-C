#include <stdio.h>

typedef int day_t;
typedef int month_t;
typedef int year_t;

struct Date
{
    day_t day;
    month_t month;
    year_t year;
};

typedef struct Date Date_t;

int main(void)
{
    Date_t myExamDate;
    day_t exam_day;
    month_t exam_month;
    year_t exam_year;

    myExamDate.day = 1;
    myExamDate.month = 2;
    myExamDate.year = 2002;

    exam_day = myExamDate.day;
    exam_month = myExamDate.month;
    exam_year = myExamDate.year;

    printf("Day:%d/%d/%d\n", exam_day, exam_month, exam_year);
    return (0);
}