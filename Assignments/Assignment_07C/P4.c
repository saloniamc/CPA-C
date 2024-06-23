#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    for (i = 4; i > 0; --i)
        for (j = 0; j < 5; ++j)
            for (k = 1; k < 8; k += 2)
            {
                printf("i=%d, j=%d, k=%d\n", i, j, k);
            }
    exit(0);
}
