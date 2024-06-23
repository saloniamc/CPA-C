#include <stdio.h>
#include <stdlib.h>

void test1(void);
void test2_using_swap(void);
void test3(void);
void swap1(int num1, int num2);
void swap2(int *num1, int *num2);

int main(void)
{
    test1();
    test2_using_swap();
    test3();

    return (0);
}

void test1(void)
{
    int a = 10;
    int b = 20;
    int temp;

    printf("Values before : a = %d. b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("Values after : a = %d, b = %d\n", a, b);
    puts("\n--------------end of test 1----------------");
}

void test2_using_swap(void)
{
    int x = 100;
    int y = 200;

    printf("Before calling swap : x = %d, y = %d\n", x, y);
    swap1(x, y);
    printf("After calling swap : x = %d, y = %d\n", x, y);
    puts("\n-------------------end of test 2-------------------");
}

void swap1(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void test3(void)
{
    int a = 1000;
    int b = 2000;

    printf("Before calling swap : a = %d, b = %d\n", a, b);
    swap2(&a, &b);
    printf("After calling swap : a = %d, b = %d\n", a, b);
    puts("------------------end of test 3---------------------");
}

void swap2(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
