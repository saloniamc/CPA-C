#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    i = 0;
    while (i <= 3)
    {
        j = 1;
        while (j <= 5)
        {
            k = 0;
            while (k < 3)
            {
                printf("i=%d, j=%d, k=%d\n", i, j, k);
                k = k + 1;
            }
            j = j + 1;
        }
        i = i + 1;
    }

    exit(0);
}