#include <stdio.h>
#include <stdlib.h>

void f1(int);
void f2(int *p);

int g1(void);
void g2(int *p);
int *g3(void);
void g4(int **pp);

void accept1(void);
void accept2(void);
void accept3(void);
void accept4(void);

int main(void)
{
    int m = 10;

    f1(m);
    f2(&m);

    accept1();
    accept2();
    accept3();
    accept4();

    return (0);
}

void accept1(void)
{
    int ret;
    ret = g1();
}

void accept2(void)
{
    int ret;
    g2(&ret);
}

void accept3(void)
{
    int *p;
    p = g3();

    free(p);
    p = 0;
}

void accept4(void)
{
    int *p;
    g4(&p);

    free(p);
    p = 0;
}

void f1(int n)
{
    printf("Input data = %d\n", n);
}

void f2(int *p)
{
    printf("Input data = %d\n", *p);
}

int g1(void)
{
    return 10;
}

void g2(int *p)
{
    *p = 10;
}

int *g3()
{
    int *p_local = 0;

    p_local = (int *)malloc(sizeof(int));
    if (p_local == NULL)
    {
        printf("Error in allocating the memory");
        exit(-1);
    }
    *p_local = 10;

    return (p_local);
}

void g4(int **pp)
{
    int *p_local = 0;

    p_local = (int *)malloc(sizeof(int));
    if (p_local == 0)
    {
        puts("Memory allocation failed");
        exit(-1);
    }

    *p_local = 10;
    *pp = p_local;
}