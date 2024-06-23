#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 10;
    int b = 20;
    int c = 3;
    int d = 2;
    int rs;
    rs = (a * b * c + b * c * a + c * a * b) / 3;

    printf("rs = %d\n", rs);

    return (0);
}