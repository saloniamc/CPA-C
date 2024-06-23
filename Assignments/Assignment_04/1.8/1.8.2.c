#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int e = 25;
    int f = 0;
    int g = 1;
    int rs = f && (!g || e);

    printf("The value in rs is %d\n", rs); // 0
    return (0);
}
