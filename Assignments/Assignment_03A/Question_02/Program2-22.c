#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float a = 3.4;
    float b = 2.0;
    float c = 2.5;
    float d = 9.1;
    float rs;
    rs = 2 * (a * a + b * b);
    printf("rs = %f\n", rs);
    rs = (a + b) * (a + b) + (a - b) * (a - b);
    printf("rs = %f\n", rs);

    return (0);
}