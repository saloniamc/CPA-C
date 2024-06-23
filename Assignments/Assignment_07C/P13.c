#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    for (i = 0; i < 5; ++i)
    {
        for (j = i + 1; j < 3; ++j)
        {
            for (k = j + 1; k < 4; ++k)
            {
                printf("i=%d, j=%d, k=%d\n", i, j, k);
            }
        }
    }
    exit(0);
}
