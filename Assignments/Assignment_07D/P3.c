#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    i = 0;
    while (i < 10)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("i = %d\n", i);
        i += 1;
    }
    exit(0);
}
