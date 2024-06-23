#include <stdio.h>
#include <stdlb.h>

int main(void)
{
    int a = 100;
    int b = 25;
    int c = 30;
    int d = 200;
    int e = 200;
    int f = 205;

    int rs = (a > b) && ((c < d) || (e == f));

    printf("The value in rs is %d\n", rs);

    return (0);
}
