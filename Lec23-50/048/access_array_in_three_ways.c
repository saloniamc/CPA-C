#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[5] = {1000, 2000, 3000, 4000, 5000};
    int(*pA)[5] = NULL;
    int *pint = NULL;

    printf("1. Accessing array using the array name:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("A[%d] : %d\n", i, A[i]);
    }
    puts("-------------------------------------------");

    pA = &A;
    printf("2. Accessing array using pointer to array:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("A[%d] : %d\n", i, (*pA)[i]);
    }

    pint = &A[0];
    printf("3. Accessing array using array element type :\n");
    for (int i = 0; i < 5; i++)
    {
        printf("A[%d] : %d\n", i, *(pint + i));
    }

    pint = A;
    printf("4. Accessing array using pointer to array element type but using array name:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("A[%d] : %d\n", i, *(pint + i));
    }
    return (0);
}