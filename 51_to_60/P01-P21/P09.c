// Initialization and showing the array of structures

#include <stdio.h>
#include <stdlib.h>

struct Date
{
    int day;
    int month;
    int year;
};

void init_array(struct Date *pDate_array, size_t N);
void show_array(struct Date *pDate_array, size_t N);

int main(void)
{
    struct Date *pDate_array = 0;
    size_t N = 5;

    pDate_array = (struct Date *)malloc(N * sizeof(struct Date));
    if (pDate_array == NULL)
    {
        puts("Error in allocating the memory");
        exit(EXIT_FAILURE);
    }

    init_array(pDate_array, N);
    show_array(pDate_array, N);

    free(pDate_array);
    pDate_array = 0;

    return (0);
}

void init_array(struct Date *pDate_array, size_t N)
{
    size_t i;
    for (int i = 0; i < N; i++)
    {
        pDate_array[i].day = 20 + i;
        pDate_array[i].month = 10 - i;
        pDate_array[i].year = 2020 + i;
    }
}

void show_array(struct Date *pDate_array, size_t N)
{
    for (int i = 0; i < N; i++)
    {
        printf("The date at index %d is %d-%d-%d\n", i, pDate_array[i].day, pDate_array[i].month, pDate_array[i].year);
    }
}