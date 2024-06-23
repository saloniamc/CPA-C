// 1.12
// Complex conditions

// rs = (a > b) || (c <= d) || (d == e);
// rs = (a < b) && (c > d) && (d == e);
// rs = !(a < b) && !(c > d) && !(d == e);
// rs = !(a < b) || !(c > d) || !(d == e);
// rs = (a == b) || (b == c) || (c == d) || (d == e);
// rs = (a == b) && (b == c) && (c == d) && (d == e);

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 25;
    int e = 25;
    int rs = (a > b) || (c <= d) || (d == e);

    printf("The value in rs is %d\n", rs);//1
    return (0);
}
