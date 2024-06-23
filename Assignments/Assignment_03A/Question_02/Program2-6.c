#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float a = 3.4;
    float b = 2.0;
    float c = 2.5;
    float d = 9.1;
    float rs;
    rs = ((a + b + c + d) / 2 - a) * ((a + b + c + d) / 2 - b) * ((a + b + c + d) / 2 - c) * ((a + b + c + d) / 2 - d);
    printf("rs = %f\n", rs);

    return (0);
}