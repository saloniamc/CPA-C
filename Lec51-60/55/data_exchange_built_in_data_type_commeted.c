#include <stdio.h>
#include <stdlib.h>

void test1(int n);
void test2(int *p);

int main(void)
{
    int m;
    int n;
    test1(100);
    m = 200;
    test1(m);

    printf("Before call to test2(): n=%d\n", n);
    test2(&n);
    printf("After call to test2(): n=%d\n", n);

    return (0);
}

void test1(int n)
{
    printf("Received input from caller: n = %d\n", n);
    puts("--------------------------------------------");
}

void test2(int *p)
{
    *p = 500;
}
