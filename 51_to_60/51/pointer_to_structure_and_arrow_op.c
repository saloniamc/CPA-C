#include <stdio.h>
#include <stdlib.h>

struct A
{
    int a;
    char b;
    float f;
};

int main(void)
{
    struct A *pA = NULL;

    struct A inA;
    pA = &inA;

    (*pA).a = 1;
    (*pA).b = 'A';
    (*pA).f = 0.421;

    printf("pA->a = %d\n pA->b = %c\n pA->f = %f\n", pA->a, pA->b, pA->f);
    return (0);
}