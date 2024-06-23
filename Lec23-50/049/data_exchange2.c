/*
1] Show array using two methods: 1. using &A
                              2. using name of the array

2] show empty uninitialized array B before populating it
3] B after populating

*/

#include <stdio.h>
#include <stdlib.h>

#define N 8

void showArray1(int (*p)[N], int n);
void showArray2(int *p, int n);
void populateArray(int *p, int n);

int main(void)
{
    int A[N] = {100, 200, 300, 400, 500, 600, 700, 800};
    int B[N];

    showArray1(&A, N);
    puts("----------------------");
    showArray2(A, N);

    puts("Show array B before populate array\n");
    showArray2(B, N);
    populateArray(B, N);
    puts("Show array B after populate array\n");
    showArray2(B, N);

    return (0);
}

void showArray1(int (*p)[N], int n)
{
    int index;
    // int element;

    for (index = 0; index < n; index++)
    {
        printf("Element at index %d = %d\n", index, (*p)[index]);
    }
}

void showArray2(int *p, int n)
{
    int index;
    int element;
    for (index = 0; index < n; index++)
    {
        printf("Element at index %d = %d\n", index, *(p + index));
    }
}

void populateArray(int *p, int n)
{
    int index;
    int element;

    for (index = 0; index < n; ++index)
    {
        *(p + index) = (index + 1) * 1000;
    }
}
