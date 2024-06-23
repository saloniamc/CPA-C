#include <stdio.h>
#include <stdlb.h>

int main(void)
{
    int a = 100;
    int b = 25;
    int c = 30;
    int d = 200;

    int rs = (a > b) || (c < d);

    printf("The value in rs is %d\n", rs);

    return (0);
}
