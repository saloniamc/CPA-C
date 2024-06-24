// Init, show, allocate and free array of structures

#include <stdio.h>
#include <stdlib.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Date *allocate_arr(size_t *N);
void init_arr(struct Date *pDate, size_t N);
void show_arr(struct Date *pDate, size_t N);
void free_arr(struct Date **ppDate);

int main(void)
{
    struct Date *pDate_arr = 0;
    size_t N;

    pDate_arr = allocate_arr(&N);
    init_arr(pDate_arr, N);
    show_arr(pDate_arr, N);
    free(&pDate_arr);

    return (0);
}

struct Date *allocate_arr(size_t *pN)
{
    struct Date *pDate_arr = 0;
    size_t N = 5;
    pDate_arr = (struct Date *)malloc(N * sizeof(struct Date));
    if (pDate_arr == NULL)
    {
        puts("Error in allocating the memory");
        exit(EXIT_FAILURE);
    }

    *pN = N;
    return (pDate_arr);
}

void init_arr(struct Date *pDate, size_t N)
{
    size_t i;
    for (i = 0; i < N; i++)
    {
        pDate[i].day = 20 + i;
        pDate[i].month = 10 - i;
        pDate[i].year = 2020 + i;
    }
}

void show_arr(struct Date *pDate, size_t N)
{
    size_t i;
    for (i = 0; i < N; i++)
    {
        printf("%d-%d-%d\n", pDate[i].day, pDate[i].month, pDate[i].year);
    }
}

void free_arr(struct Date **ppDate)
{
    free(*ppDate);
    ppDate = 0;
}
