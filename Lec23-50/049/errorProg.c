#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int(*p)[5] = 0;
    int i;

    for (i = 0; i < 8; ++i)
        printf("(*p + %d = %d)\n", i, (*p + i));

    return (0);
}
