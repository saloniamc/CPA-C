#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = 8; i > 0; --i)
        for (j = 0; j < 8; ++j)
        {
            if (i > j)
                printf("i=%d is greater than j=%d\n", i, j);
            else if (i < j)
                printf("i=%d is less than j=%d\n", i, j);
            else
                printf("i=%d is equal to j=%d\n", i, j);
        }
}
