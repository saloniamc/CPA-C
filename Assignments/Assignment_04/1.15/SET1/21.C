#include <stdio.h>
#include <stdlb.h>

int main(void)
{
    int a = 10;
    int b = 20;
    int c = 300;
    int d = 200;
    int e = 200;
    int f = 200;

    int rs = ((a > b) || (c < d)) && ((c < d) || (e == f)) && ((e == f) || (a > b));

    printf("The value in rs is %d\n", rs);

    return (0);
}
