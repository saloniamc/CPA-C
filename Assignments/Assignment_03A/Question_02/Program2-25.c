#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float a = 3.4;
    float b = 2.0;
    float c = 2.5;
    float d = 9.1;
    float rs;

    rs = a * a * a + b * b * b + c * c * c - 3 * a * b * c;
    printf("rs = %f\n", rs);
    rs = (a + b + c) * (a * a + b * b + c * c - a * b - b * c - c * a);
    printf("rs = %f\n", rs);
    return (0);
}