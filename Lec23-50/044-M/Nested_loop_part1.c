#include <stdio.h>
#include <stdlib.h>

#define N 10

void test1(void);
void test2(void);

int main(void)
{
    test1();
    test2();

    return (EXIT_SUCCESS);
}

void test1(void)
{
    printf("Using while :\n");
    int j = 0;
    while (j < N)
    {
        printf("0, %d\n", j);
        j++;
    }
    printf("\n");

    printf("Using For :\n");
    for (int i = 0; i < N; i++)
    {
        printf("0, %d\n", i);
    }
}

void test2(void)
{
    printf("Using while:\n");
    int i = 0;
    while (i < N)
    {
        int j = 0;
        while (j < N)
        {
            printf("%d, %d\n", i, j);
            j++;
        }
        i++;
    }

    printf("\nUsing for : \n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d, %d\n", i, j);
        }
    }
}
