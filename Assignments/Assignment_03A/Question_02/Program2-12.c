#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float a = 3.4;
    float b = 2.0;
    float c = 2.5;
    float d = 9.1;
    float rs;
    rs = d - d * d / 2 + d * d * d * d / 4 * 3 * 2 * 1;
    printf("rs = %f\n", rs);

    return (0);
}