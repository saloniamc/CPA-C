#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 0; i < 10; ++i)
    {
        if (i % 2 == 1)
            continue;
        for (j = 0; j < 10; ++j)
        {
            if (j % 2 == 0)
                continue;
            printf("i = %d, j = %d\n", i, j);
        }
    }
    exit(0);
}