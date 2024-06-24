#include <stdio.h>
#include <stdlib.h>

int *get_array(int *pN);

int main(void)
{
    int *p = 0;
    int N = -1;
    int i;

    p = get_array(&N);
    // Fill the array
    for (i = 0; i < N; i++)
    {
        *(p + i) = (i + 1) * 100;
    }

    // Show the array
    for (i = 0; i < N; i++)
    {
        printf("*(p + %lld) = %d\n", i, *(p + i));
    }

    free(p);
    p = 0;

    return (0);
}

int *get_array(int *pN)
{
    int *p = 0;
    int N = -1;

    printf("Enter the size of the array\n");
    scanf("%d", &N);

    if (N <= 0)
    {
        puts("Enter the valid size");
        exit(-1);
    }

    p = (int *)malloc(N * sizeof(int));
    if (p == NULL)
    {
        puts("Error in alocating the memory");
        exit(EXIT_FAILURE);
    }

    *pN = N;

    return (p);
}

#include <stdio.h>
#include <stdlib.h>

int *get_array(int *pN);

int main(void)
{
    int *p = 0;
    int N = -1;
    int i;

    p = get_array(&N);

    // Fill the array
    for (i = 0; i < N; i++)
    {
        *(p + i) = (i + 1) * 100;
    }

    // Show the array
    for (i = 0; i < N; i++)
    {
        printf("*(p+%lld) = %d\n", i, *(p + i));
    }

    free(p);
    p = 0;

    return (0);
}

int* get_array(int* pN)
{
    int* p =0;
    int N = -1;

    printf("Enter the size of the array: \n");
    scanf("%d", &N);

    if(N < 0)
    {
        puts("Enter the valid size");
        exit(-1);
    }

    p = (int*)malloc(N*sizeof(int));
    if(p == NULL)
    {
        puts("Error in allocating the memory");
        exit(EXIT_FAILURE);
    }

    *pN = N;

    return (p);
}
