#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for (i = 5; i >= 0; i = i - 1)
        printf("i=%d\n", i);
    exit(0);
}
