#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 10;
    int b = 20;
    int rs = !(a != b);

    printf("The value in rs is %d\n", rs); // 0
    return (0);
}
