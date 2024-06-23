#include <stdio.h>
#include <stdlib.h>

#define N 10
int main(void)
{
    int arr[N];
    int i = 0;
    int sum = 0;

    while (i < N)
    {
        printf("Enter element %d: \n", i);
        scanf("%d", &arr[i]);
        i++;
    }

    i = 0;
    while (i < N)
    {
        sum = sum + arr[i];
        i++;
    }

    printf("The summation is %d\n", sum);

    return (0);
}
