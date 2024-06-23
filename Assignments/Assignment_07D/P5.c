#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for (i = 0; i < 8; ++i)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        else if (i % 4 == 0)
            break;
        else
            printf("i = %d\n", i);
    }
    exit(0);
}
