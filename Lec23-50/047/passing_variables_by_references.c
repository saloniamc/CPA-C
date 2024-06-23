#include <stdio.h>
#include <stdlib.h>

void f1(char *p);
void f2(unsigned char *p);
void f3(short *p);
void f4(unsigned short *p);
void f5(int *p);
void f6(unsigned int *p);
void f7(long *p);
void f8(unsigned long *p);
void f9(long long *p);
void f10(unsigned long long *p);
void f11(float *p);
void f12(double *p);

int main(void)
{
    char c = 's';
    unsigned char uc = 100;

    short s = -200;
    unsigned short us = 300;

    int i = -374738;
    unsigned int ui = 737839;

    long l = -3628354;
    unsigned long ul = 9579925;

    long long ll = -1827937490;
    unsigned long long ull = 836282379;

    float f = -3.1456;
    double d = 4.864839369;

    printf("Values before : %c, %hhu, %hd, %hu, %d, %u, %ld, %lu, %lld, %llu, %f, %lf\n\n",
           c, uc, s, us, i, ui, l, ul, ll, ull, f, d);

    f1(&c);
    f2(&uc);
    f3(&s);
    f4(&us);
    f5(&i);
    f6(&ui);
    f7(&l);
    f8(&ul);
    f9(&ll);
    f10(&ull);
    f11(&f);
    f12(&d);

    printf("Values before : %c, %hhu, %hd, %hu, %d, %u, %ld, %lu, %lld, %llu, %f, %lf",
           c, uc, s, us, i, ui, l, ul, ll, ull, f, d);

    return (0);
}

void f1(char *p)
{
    *p = 'S';
}
void f2(unsigned char *p)
{
    *p = 127;
}
void f3(short *p)
{
    *p = 2222;
}
void f4(unsigned short *p)
{
    *p = 857;
}
void f5(int *p)
{
    *p = -234566;
}
void f6(unsigned int *p)
{
    *p = 10293;
}
void f7(long *p)
{
    *p = -55555;
}
void f8(unsigned long *p)
{
    *p = 55555;
}
void f9(long long *p)
{
    *p = -899999999999;
}
void f10(unsigned long long *p)
{
    *p = 99999999999;
}
void f11(float *p)
{
    *p = -7.1541;
}
void f12(double *p)
{
    *p = 56.191941863;
}
