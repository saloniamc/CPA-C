#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 0; i <= 8; ++i)
        for (j = 8; j > i; --j)
            printf("i=%d, j=%d\n", i, j);
    exit(0);
}
