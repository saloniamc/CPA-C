#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    for (i = 0; i < 10; ++i)
    {
        if (i % 2 == 0)
        {
            for (j = 0; j < 8; ++j)
            {
                if (j % 3 == 0)
                {
                    for (k = 0; k < 4; ++k)
                    {
                        printf("i=%d, j=%d, k=%d\n", i, j, k);
                    }
                }
            }
        }
    }
    exit(0);
}
