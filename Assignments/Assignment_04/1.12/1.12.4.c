#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 25;
    int e = 25;
    int rs = !(a < b) || !(c > d) || !(d == e);

    printf("The value in rs is %d\n", rs); // 0
    return (0);
}