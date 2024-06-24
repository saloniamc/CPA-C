#include <stdio.h>
#include <stdlib.h>

void get_array(int **pp_arr, int *pN);
void fill_array(int **pp_arr, int N);
void show_array(int **pp_arr, int N);
void release_array(int **pp_arr);

int main(void)
{
    int *p_arr = 0;
    int N = -1;

    get_array(&p_arr, &N);
    fill_array(&p_arr, N);
    show_array(&p_arr, N);
    release_array(&p_arr);

    return (0);
}

void get_array(int **pp_arr, int *pN)
{
    int *p_arr = 0;
    int N = -1;

    printf("Enter the size of the array:");
    scanf("%d", &N);

    if (N <= 0)
    {
        puts("Enter the valid size:");
        exit(-1);
    }

    p_arr = (int *)malloc(N * sizeof(int));
    if (p_arr == NULL)
    {
        puts("Error in allocating the memory");
        exit(EXIT_FAILURE);
    }

    *pN = N;
    *pp_arr = p_arr;
}

void fill_array(int **pp_arr, int N)
{
    size_t i;
    for (i = 0; i < N; i++)
    {
        *((*pp_arr) + i) = (i + 1) * 100;
    }
}

void show_array(int **pp_arr, int N)
{
    size_t i;
    for (i = 0; i < N; i++)
    {
        printf("*((*pp_arr) + %lld) = %d\n", i, *((*pp_arr) + i));
    }
}

void release_array(int **pp_arr)
{
    free(*pp_arr);
    *pp_arr = 0;
}