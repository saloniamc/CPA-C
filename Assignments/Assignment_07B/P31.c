#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 8; i >= 0; --i)
        for (j = i - 1; j >= 0; --j)
            printf("i=%d, j=%d\n", i, j);
    exit(0);
}
