#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[5] = {100, 200, 300, 400, 500};
    int i;
    int(*p_arr)[5] = NULL;
    int *pint;

    printf("Printing array using its name\n");
    for (i = 0; i < 5; i++)
    {
        printf("A[%d] is:%d\n", i, A[i]);
    }

    pint = &A[0];

    printf("Using pointer\n");
    for (i = 0; i < 5; i++)
    {
        // int n = (*pint + i);
        printf("A[%d] is: %d\n", i, *(pint + i));
    }
    return (0);
}