#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for (i = 0; i < 20; ++i)
    {
        if ((i * i) > 50)
            break;
        else
            printf("i = %d\n", i);
    }
    exit(0);
}