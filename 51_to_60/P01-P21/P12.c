// Dynamically allocating an array 5 of pointers to integers
//  initialize, show, and free the array members inside main

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *a[5] = {0, 0, 0, 0, 0};
    int i;

    for (i = 0; i < 5; ++i)
    {
        a[i] = (int *)malloc(sizeof(int));
        if (a[i] == NULL)
        {
            puts("Error in allocating the memory");
            exit(-1);
        }
    }

    for (i = 0; i < 5; i++)
    {
        *a[i] = (i + 1) * 200;
    }

    for (i = 0; i < 5; i++)
    {
        printf("The int at index %d is %d\n", i, *a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        free(a[i]);
        a[i] = 0;
    }

    return (0);
}