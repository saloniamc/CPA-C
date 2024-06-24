#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p;
    int m;

    p = (int *)malloc(sizeof(int));
    if (p == 0)
    {
        printf("Error in allocating the memory.");
        exit(-1);
    }

    *p = 300;
    m = *p;

    printf("m = %d\n *p = %d\n", m, *p);
    free(p);
    p = 0;

    return (0);
}