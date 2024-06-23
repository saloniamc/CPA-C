#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int d = 25;
    int e = 25;
    int rs = !(d == e);

    printf("The value in rs is %d\n", rs); // 0
    return (0);
}
