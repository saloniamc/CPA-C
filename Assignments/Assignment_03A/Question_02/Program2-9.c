#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float a = 3.4;
    float b = 2.0;
    float c = 2.5;
    float d = 9.1;
    float rs;
    rs = (-b + b * b - 4 * a * c) / (2 * a);
    printf("rs = %f\n", rs);

    return (0);
}