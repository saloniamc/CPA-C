// Initialize, and show array of pointers to integers
#include <stdio.h>
#include <stdlib.h>

void initialize(int **pp_arr, int N);
void show(int **pp_arr, int N);

int main(void)
{
    int *a[5] = {0, 0, 0, 0, 0};
    int i;

    for (i = 0; i < 5; i++)
    {
        a[i] = (int *)malloc(sizeof(int));
        if (a[i] == NULL)
        {
            puts("Error in allocating the memory");
            exit(EXIT_FAILURE);
        }
    }

    initialize(a, 5);
    show(a, 5);

    for (i = 0; i < 5; i++)
    {
        free(a[i]);
        a[i] = 0;
    }

    return (0);
}

void initialize(int **pp_arr, int N)
{
    int i;
    for (i = 0; i < N; i++)
    {
        *pp_arr[i] = (i + 10);
    }
}

void show(int **pp_arr, int N)
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("*pp_arr[%d]:%d\n", i, *pp_arr[i]);
    }
}
