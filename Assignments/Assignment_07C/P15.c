#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    for (i = 0; i < 5; ++i)
    {
        for (j = 3; j > 0; --j)
        {
            for (k = 0; k < 4; ++k)
            {
                if ((i + j) > k)
                    printf("i=%d + j=%d > k=%d\n", i, j, k);
                else if ((j + k) > i)
                    printf("j=%d + k=%d > i=%d\n", j, k, i);
                else if ((k + i) > j)
                    printf("k=%d + i=%d > j=%d\n", k, i, j);
            }
        }
    }
    exit(0);
}
