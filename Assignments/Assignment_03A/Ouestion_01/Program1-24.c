#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 10;
    int b = 20;
    int c = 3;
    int d = 2;
    int rs;
    rs = d - d * d / 2 + d * d * d * d / 4 * 3 * 2 * 1;

    printf("rs = %d\n", rs);

    return (0);
}