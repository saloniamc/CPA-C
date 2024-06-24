#include <stdio.h>
#include <stdlib.h>

void test1(int n);
void test2(int *p);
void test3(int *p);

int main(void)
{
    int m;
    int n;
    int k = 2000;

    test1(100);
    m = 200;
    test1(m);

    printf("Before call to test2:n = %d\n", n);
    test2(&n);
    printf("After call to test2:n = %d\n", n);
    puts("------------------------------------");

    printf("Before call to test3: = %d\n", k);
    test3(&k);
    printf("After call to test3: = %d\n", k);
    puts("------------------------------------");

    return (0);
}

void test1(int n)
{
    printf("received input from caller:n=%d\n", n);
    puts("------------------------------------");
}

void test2(int *p)
{
    *p = 500;
}

void test3(int *p)
{
    printf("Just entered in test3:*p=%d\n", *p);
    *p = *p * *p;
}