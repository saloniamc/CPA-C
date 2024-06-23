#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 0; i < 16; ++i)
        for (j = 1; j < 128; j <<= 2)
            printf("i=%d, j=%d\n", i, j);
    exit(0);
}
