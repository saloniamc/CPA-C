#include <stdio.h>
#include <stdlib.h>

struct B
{
    double x;
    double y;
};

struct A
{
    int num;
    struct B *pB;
    float fnum;
};

int main(void)
{
    struct B inB;
    struct A inA;

    inA.pB = &inB;

    struct A *pA = &inA;

    (*(*pA).pB).x = 8.4495;
    (*(*pA).pB).y = 2.1065;

    (*pA).num = 3;
    (*pA).fnum = 6.01;

    printf("Values : A.num = %d\n A.fnum = %f\n A.pB.x = %lf\n A.pB.y = %lf\n", (*pA).num, (*pA).fnum, (*(*pA).pB).x, (*(*pA).pB).y);

    struct B *p = &inB;

    (*p).x = 75.666;
    (*p).y = 40.0001;

    printf("New double values : %lf, %lf\n", (*p).x, (*p).y);

    return (0);
}