#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n1 = 100;
    int n2 = 200;
    int sum, sub, mul, quotient, remainder;

    sum = n1 + n2;
    printf("sum = %d\n", sum);

    sub = n1 - n2;
    printf("substraction = %d\n", sub);

    mul = n1 * n2;
    printf("Mul = %d\n", mul);

    quotient = n1 / n2;
    printf("quotient = %d\n", quotient);

    remainder = n1 % n2;
    printf("remainder = %d\n", remainder);

    exit(0);
}