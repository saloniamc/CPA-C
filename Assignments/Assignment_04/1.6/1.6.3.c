#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int f = 0;
    int g = 1;
    int rs = !f && g;

    printf("The value in rs is %d\n", rs); // 1

    return (0);
}
