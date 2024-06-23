#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n1 = 100;
    int n2 = 70;
    int rs;

    rs = (n1 > n2);
    printf("rs = %d\n", rs);

    rs = (n1 >= n2);
    printf("rs = %d\n", rs);

    rs = (n1 < n2);
    printf("rs = %d\n", rs);

    rs = (n1 <= n2);
    printf("rs = %d\n", rs);

    rs = (n1 == n2);
    printf("rs = %d\n", rs);

    rs = (n1 != n2);
    printf("rs = %d\n", rs);

    return (0);
}