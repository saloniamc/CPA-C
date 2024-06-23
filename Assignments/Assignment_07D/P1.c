#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for (i = 0; i < 10; ++i)
    {
        printf("i = %d\n", i);
        if (i % 2 == 0)
            continue;
        printf("i^2 = %d\n", i * i);
    }
    exit(0);
}
