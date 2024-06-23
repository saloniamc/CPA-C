#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = -5; i < 5; ++i)
        for (j = -3; j < 3; ++j)
        {
            if ((i + j) < 0)
                printf("i=%d, j=%d i + j is less than 0\n", i, j);
            else if ((i + j) == 0)
                printf("i=%d, j=%d i + j equal to 0\n", i, j);
            else
                printf("i=%d, j=%d i + j greater than 0\n", i, j);
        }

    exit(0);
}
