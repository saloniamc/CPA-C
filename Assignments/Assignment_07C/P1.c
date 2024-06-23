#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 5; ++j)
            for (k = 0; k < 4; ++k)
            {
                printf("i=%d, j=%d, k=%d\n", i, j, k);
            }
    exit(0);
}
