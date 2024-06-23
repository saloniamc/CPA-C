#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 10;
    int b = 20;
    int c = 3;
    int d = 2;
    int rs;
    rs = rs = (a * (b + c * (d + a))) / (a - (b + (c / d)));

    // int rs1, rs2, rs3;
    // rs1 = (a * (b + c * (d + a)));
    // rs2 = (a - (b + (c / d)));
    // rs3 = rs1 / rs2;
    // printf("%d\n", rs1);
    // printf("%d\n", rs2);
    // printf("%d\n", rs3);

    printf("rs = %d\n", rs);

    return (0);
}