// Array of struct Date
#include <stdio.h>
#include <stdlib.h>

struct Date
{
    int day;
    int month;
    int year;
};

int main(void)
{
    struct Date d_arr[5];

    for (int i = 0; i < 5; i++)
    {
        d_arr[i].day = i + 1;
        d_arr[i].month = 10 - i;
        d_arr[i].year = 2020 + i;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Dtae at index is %d is %d-%d-%d\n", i, d_arr[i].day, d_arr[i].month, d_arr[i].year);
    }
}
