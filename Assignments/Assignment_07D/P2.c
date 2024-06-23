#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for (i = -16; i < 16; ++i)
    {
        if (i % 4 == 0)
            continue;
        printf("i=%d\n", i);
    }
    exit(0);
}
