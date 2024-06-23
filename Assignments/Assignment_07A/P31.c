#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for (i = 16; i > 1; i = i - 4)
        printf("i=%d\n", i);
    exit(0);
}
