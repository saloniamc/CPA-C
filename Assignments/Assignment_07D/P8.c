#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 0; i < 5; ++i)
        for (j = 0; j < 5; ++j)
            if (i > j)
                continue;
            else
                printf("i = %d is less than or equal to j = %d\n", i, j);

    exit(0);
}