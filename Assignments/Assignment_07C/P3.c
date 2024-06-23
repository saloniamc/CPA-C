#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    for (i = 0; i < 10; i = i + 3)
    {
        for (j = 0; j <= 16; j = j + 4)
        {
            for (k = 1; k < 20; k += 6)
            {
                printf("i=%d, j=%d, k=%d\n", i, j, k);
            }
        }
    }

    exit(0);
}
