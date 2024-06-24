// allocate, init, show and free array of structures
// address of pDate is passed to allocate array as actual arg,
// the double pointer which is the formal param of allocate_arr receives it
// in allocate_arr itself the address of dynamically allocatde array of structures is put into *ppdate;

#include <stdio.h>
#include <stdlib.h>

struct Date
{
    int day;
    int month;
    int year;
};

void allocate_arr(struct Date **ppDate, size_t *pN);
void init_arr(struct Date *pDate, size_t N);
void show_arr(struct Date *pDate, size_t N);
void free_arr(struct Date **ppDate);

int main(void)
{
    struct Date *pDate = 0;
    size_t N = -1;

    allocate_arr(&pDate, &N);
    init_arr(pDate, N);
    show_arr(pDate, N);
    free_arr(&pDate);

    return (0);
}

void allocate_arr(struct Date **ppDate, size_t *pN)
{
    struct Date *pDate;
    size_t N = 5;

    pDate = (struct Date *)malloc(N * sizeof(struct Date));
    if (pDate == NULL)
    {
        puts("Error in allocating the memory");
        exit(EXIT_FAILURE);
    }

    *ppDate = pDate;
    *pN = N;
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
    *ppDate = 0;
}
