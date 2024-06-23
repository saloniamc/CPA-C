#include <stdio.h>
#include <stdlib.h>

int get_integer_value(void);
void get_integer_value1(int *pInt);

int main(void)
{
    int num1 = 0;
    int num2 = 0;

    printf("num1 = %d, num2 = %d\n\n", num1, num2);
    num1 = get_integer_value();
    get_integer_value1(&num2);

    printf("num1 = %d, num2 = %d\n", num1, num2);

    return (0);
}

int get_integer_value(void)
{
    int n = 100;
    return (n);
}

void get_integer_value1(int *pInt)
{
    *pInt = 120;
}