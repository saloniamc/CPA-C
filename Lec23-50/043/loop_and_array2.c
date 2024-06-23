#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arr[10];
    int k = 0;

    while (k < 10)
    {
        if ((k % 2) == 0)
        {
            arr[k] = k * k;
            k += 1;
        }
        else
        {
            arr[k] = k * k * k;
            k += 1;
        }
    }
    k = 0;
    while (k < 10)
    {
        printf("k = %d\n", arr[k]);
        k += 1;
    }
    return (0);
}
