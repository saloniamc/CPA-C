#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 100;
    int m = 200;

    int *p1 = 0;
    int *p2 = 0;

    int **pp = 0;

    p1 = &n;
    p2 = &m;

    pp = &p1;
    printf("Before: **pp=-900: n = %d\n", n);
    **pp = -900;
    printf("After: **pp=-900: n = %d\n", n);

    pp = &p2;
    printf("Before: **pp=600: n = %d\n", m);
    **pp = 600;
    printf("Before: **pp=-600: n = %d\n", m);

    return (0);
}
