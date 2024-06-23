// rs = f && f;
// rs = f && g;
// rs = g && f;
// rs = g && g;

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int f = 0;
    int g = 1;
    int rs = (f && f);

    printf("The value in rs is %d\n", rs); // 0
    return (0);
}