#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    for (i = 0; i < 5; ++i)
    {
        for (j = 5; j > 0; --j)
        {
            if (i > j)
            {
                for (k = 0; k < 4; ++k)
                {
                    printf("i=%d, j=%d, k=%d\n", i, j, k);
                }
            }
            else
            {
                printf("i=%d is less than or equal to j=%d\n", i, j);
            }
        }
    }
    exit(0);
}
