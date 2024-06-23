#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for (i = -5; i < 5; ++i)
        for (j = -4; j <= 4; ++j)
        {
            if ((i * j) < 0)
                puts("i * j less than 0");
            else if ((i * j) == 0)
                puts("i * j equal to 0");
            else
                puts("i * j greater than 0");
        }
    exit(0);
}
