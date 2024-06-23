#include <stdioh>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    for (i = 1; i < 16; i *= 2)
    {
        for (j = 16; j > 1; j /= 2)
        {
            for (k = 1; k < 10; k << 2)
            {
                printf("i=%d, j=%d, k=%d\n", i, j, k);
            }
        }
    }
    exit(0);
}
